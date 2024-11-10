#include "PmergeMe.hpp"
#include <algorithm>
#include <chrono>
#include <iostream>
#include <list>
#include <vector>

const PmergeMe& PmergeMe::operator=(const PmergeMe& obj) {
	(void)obj;
	return *this;
}

std::vector<int> PmergeMe::sortVector(std::vector<int>& input) {
	std::vector<int> smallNums;
    std::vector<int> largeNums;
    splitVecToPairs(input, largeNums, smallNums);
    sortAndInsertVecPairs(largeNums, smallNums);
    return largeNums;
}

std::list<int> PmergeMe::sortList(std::list<int>& input) {
    std::list<int> largeNums;
	std::list<int> smallNums;
    splitListToPairs(input, largeNums, smallNums);
    sortAndInsertListPairs(largeNums, smallNums);
    return largeNums;
}

void PmergeMe::splitVecToPairs(std::vector<int>& input, std::vector<int>& largeNums, std::vector<int>& smallNums) {
    std::vector<std::vector<int>> pairs;
    int extraValue = 0;
    if (input.size() % 2 == 1) {
        extraValue = input.back();
        input.pop_back();
    }
    for (size_t i = 0; i < input.size(); i += 2) {
        std::vector<int> currentPair = {input[i], input[i + 1]};
        std::sort(currentPair.begin(), currentPair.end());
        pairs.push_back(currentPair);
    }
    std::sort(pairs.begin(), pairs.end(), [](const auto& a, const auto& b) {
		return a[1] < b[1];
	});
    for (const auto& pair : pairs) {
        largeNums.push_back(pair[1]);
        smallNums.push_back(pair[0]);
    }
    if (extraValue != 0) {
        smallNums.push_back(extraValue);
	}
}

void PmergeMe::splitListToPairs(std::list<int>& input, std::list<int>& largeNums, std::list<int>& smallNums) {
    std::list<std::pair<int, int>> pairs;
    int extraValue = 0;
    if (input.size() % 2 == 1) {
        extraValue = input.back();
        input.pop_back();
    }
    auto it = input.begin();
    while (it != input.end()) {
        int first = *it++;
        int second = *it++;
        pairs.emplace_back(std::min(first, second), std::max(first, second));
    }
    pairs.sort([](const auto& a, const auto& b) {
		return a.second < b.second;
	});
    for (const auto& pair : pairs) {
        largeNums.push_back(pair.second);
        smallNums.push_back(pair.first);
    }
    if (extraValue != 0) {
        smallNums.push_back(extraValue);
	}
}

void PmergeMe::sortAndInsertVecPairs(std::vector<int>& largeNums, std::vector<int>& smallNums) {
	int len = smallNums.size();
	int sequenceIndex = 1;
    int index = 1;
    largeNums.insert(largeNums.begin(), smallNums.front());
    while (index < len) {
        for (int j = jacobsthalSeq(sequenceIndex); j > 0 && j > jacobsthalSeq(sequenceIndex - 1); --j) {
            if (j >= len) {
                j = len - 1;
			}
            binaryInsertVec(largeNums, 0, largeNums.size(), smallNums[j]);
            ++index;
        }
        ++sequenceIndex;
    }
}

void PmergeMe::sortAndInsertListPairs(std::list<int>& largeNums, const std::list<int>& smallNums) {
    auto it = smallNums.begin();
    int index = 1;
	int sequenceIndex = 1;
	int len = smallNums.size();
    largeNums.insert(largeNums.begin(), *it++);
    while (index < len) {
        for (int j = jacobsthalSeq(sequenceIndex); j > 0 && j > jacobsthalSeq(sequenceIndex - 1); --j) {
            if (j >= len) {
                j = len - 1;
			}
            auto it = std::next(smallNums.begin(), j);
            binaryInsertList(largeNums, *it);
            ++index;
        }
        ++sequenceIndex;
    }
}

void PmergeMe::binaryInsertVec(std::vector<int>& largeNums, int start, int end, int value) {
    if (start >= end) {
        largeNums.insert(largeNums.begin() + start, value);
        return ;
    }
    int middle = start + (end - start) / 2;
    if (largeNums[middle] < value) {
        binaryInsertVec(largeNums, middle + 1, end, value);
	} else if (largeNums[middle] > value) {
        binaryInsertVec(largeNums, start, middle, value);
	} else {
        largeNums.insert(largeNums.begin() + middle, value);
	}
}

void PmergeMe::binaryInsertList(std::list<int>& largeNums, int value) {
    int dist = std::distance(largeNums.begin(), largeNums.end());
	auto it = largeNums.begin();
    while (dist > 0) {
        int step = dist / 2;
        auto middle = it;
        std::advance(middle, step);
        if (*middle < value) {
            it = middle;
            ++it;
            dist -= step + 1;
        } else if (*middle > value) {
            dist = step;
		} else {
            largeNums.insert(middle, value);
            return ;
        }
    }
    largeNums.insert(it, value);
}

int PmergeMe::jacobsthalSeq(int n) {
    if (n == 0) {
        return 0;
	}
    if (n == 1) {
        return 1;
	}
    int prev = 0;
	int curr = 1;
    for (int i = 2; i < n; ++i) {
        int next = curr + 2 * prev;
        prev = curr;
        curr = next;
    }
    return curr;
}

void PmergeMe::printDuration(std::chrono::duration<double> duration, const std::string& containerType, int size) {
	std::cout 	<< "Time to process a range of "
				<< size << " elements with std::"
				<< containerType
				<< " : " << std::fixed << std::setprecision(6)
				<< duration.count() << " seconds\n";
}

void PmergeMe::parseInput(const std::vector<std::string>& input) {
	for (const std::string& s : input) {
		for (char c : s) {
			if (!std::isdigit(c)) {
				throw std::invalid_argument("expected positive integers only");
			}
		}
        try {
            int n = std::stoi(s);
            if (n < 0) {
                throw std::invalid_argument("expected positive integers only!");
            }
        } catch (const std::out_of_range&) {
            std::cerr << "ERROR: The number is out of range for an int" << "\n";
            throw;
        } catch (const std::invalid_argument&) {
            std::cerr << "ERROR: Invalid input, not a number" << "\n";
            throw;
        }
    }
}
