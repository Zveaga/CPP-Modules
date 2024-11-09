/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/01 20:12:53 by rares         #+#    #+#                 */
/*   Updated: 2024/11/09 17:32:06 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<int> PmergeMe::mergeVec(const std::vector<int>& left, const std::vector<int>& right) {
    std::vector<int> result;
    size_t i = 0, j = 0;

    // Pairwise merging for Ford-Johnson comparison optimization
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            result.push_back(left[i]);
            ++i;
        } else {
            result.push_back(right[j]);
            ++j;
        }
    }

    // Append any remaining elements
    while (i < left.size()) result.push_back(left[i++]);
    while (j < right.size()) result.push_back(right[j++]);

    return result;
}

std::list<int> PmergeMe::mergeList(const std::list<int>& left, const std::list<int>& right) {
    std::list<int> result;
    auto it1 = left.begin();
    auto it2 = right.begin();

    // Pairwise merging for Ford-Johnson comparison optimization
    while (it1 != left.end() && it2 != right.end()) {
        if (*it1 <= *it2) {
            result.push_back(*it1);
            ++it1;
        } else {
            result.push_back(*it2);
            ++it2;
        }
    }

    // Append any remaining elements
    result.insert(result.end(), it1, left.end());
    result.insert(result.end(), it2, right.end());
    return result;
}

std::vector<int> PmergeMe::sortVec(const std::vector<int>& vec) {
    if (vec.size() <= 1)
        return vec;

    // Pair elements and split for recursive sorting
    std::vector<int> minVec, maxVec;
    for (size_t i = 0; i < vec.size(); i += 2) {
        if (i + 1 < vec.size()) {
            minVec.push_back(std::min(vec[i], vec[i + 1]));
            maxVec.push_back(std::max(vec[i], vec[i + 1]));
        } else {
            minVec.push_back(vec[i]);
        }
    }

    // Recursively sort the minimums and maximums
    minVec = sortVec(minVec);
    maxVec = sortVec(maxVec);

    // Final merging with Ford-Johnson rules
    return mergeVec(minVec, maxVec);
}

std::list<int> PmergeMe::sortList(const std::list<int>& lst) {
    if (lst.size() <= 1)
        return lst;

    // Pair elements and split for recursive sorting
    std::list<int> pairedMin;
    std::list<int> pairedMax;
    auto it = lst.begin();

    while (it != lst.end()) {
        auto nextIt = std::next(it);
        if (nextIt != lst.end()) {
            if (*it < *nextIt) {
                pairedMin.push_back(*it);
                pairedMax.push_back(*nextIt);
            } else {
                pairedMin.push_back(*nextIt);
                pairedMax.push_back(*it);
            }
            std::advance(it, 2);
        } else {
            pairedMin.push_back(*it);
            ++it;
        }
    }

    // Recursively sort minimums and maximums
    pairedMin = sortList(pairedMin);
    pairedMax = sortList(pairedMax);

    // Final merging with Ford-Johnson rules
    return mergeList(pairedMin, pairedMax);
}

int PmergeMe::jacobS(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int prev = 0;
    int current = 1;
    for (int i = 2; i < n; ++i) {
        int next = current + 2 * prev;
        prev = current;
        current = next;
    }
    return current;
}

// template<class T>
// T PmergeMe::createContainer(const std::vector<std::string>& input) {
//     T newContainer;
//     for (const std::string& s : input)
//         newContainer.push_back(std::stoi(s));
//     return newContainer;
// }

void PmergeMe::binaryVecInsert(std::vector<int>& chainA, int start, int len, int value) {
    if (start >= len) {
        chainA.insert(chainA.begin() + start, value);
        return;
    }

    int mid = start + (len - start) / 2;

    if (chainA[mid] < value)
        binaryVecInsert(chainA, mid + 1, len, value);
    else if (chainA[mid] > value)
        binaryVecInsert(chainA, start, mid, value);
    else {
        chainA.insert(chainA.begin() + mid, value);
        return;
    }
}

void PmergeMe::binaryListInsert(std::list<int>& chainA, int value) {
    auto it = chainA.begin();
    int distance = std::distance(chainA.begin(), chainA.end());

    while (distance > 0) {
        int step = distance / 2;
        auto mid = it;
        std::advance(mid, step);

        if (*mid < value) {
            it = mid;
            ++it;
            distance -= step + 1;
        } else if (*mid > value) {
            distance = step;
        } else {
            chainA.insert(mid, value);
            return;
        }
    }
    chainA.insert(it, value);
}

void PmergeMe::insertVecSort(std::vector<int>& chainA, std::vector<int>& chainB) {
    int i = 1;
    int n = 1;
    int len = chainB.size();

    chainA.insert(chainA.begin(), chainB.front());

    while (i < len) {
        for (int j = jacobS(n); j > 0 && j > jacobS(n - 1); --j) {
            auto it = chainB.begin();
            if (j >= len)
                j = len - 1;
            std::advance(it, j);
            binaryVecInsert(chainA, 0, chainA.size(), *it);
            ++i;
        }
        ++n;
    }
}

void PmergeMe::insertListSort(std::list<int>& chainA, const std::list<int>& chainB) {
    auto itA = chainA.begin();
    auto itB = chainB.begin();
	(void)itA;

    if (itB != chainB.end())
        chainA.insert(chainA.begin(), *itB++);

    int i = 1;
    int n = 1;
    int len = chainB.size();

    while (i < len) {
        for (int j = jacobS(n); j > 0 && j > jacobS(n - 1); --j) {
            auto it = chainB.begin();
            if (j >= len)
                j = len - 1;
            std::advance(it, j);
            binaryListInsert(chainA, *it);
            ++i;
        }
        ++n;
    }
}

std::vector<int> PmergeMe::sortVector(int argc, char **argv) {
    std::vector<std::string> input(argv + 1, argv + argc);
    std::vector<int> vec = createContainer<std::vector<int>>(input);

    std::vector<int> sortedVec = sortVec(vec);
    return sortedVec;
}

std::list<int> PmergeMe::sortList(int argc, char **argv) {
    std::vector<std::string> input(argv + 1, argv + argc);
    std::list<int> lst = createContainer<std::list<int>>(input);

    std::list<int> sortedList = sortList(lst);
    return sortedList;
}

//////////////////////////////////////////////////////////////////////

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
				throw std::invalid_argument("Error: expected digits only");
			}
		}
        try {
            int n = std::stoi(s);
            if (n < 0) {
                throw std::invalid_argument("Error: expected positive integers");
            }
        } catch (const std::out_of_range&) {
            std::cerr << "Error: The number is out of range for an int" << std::endl;
            throw;
        } catch (const std::invalid_argument&) {
            std::cerr << "Error: Invalid input, not a number" << std::endl;
            throw;
        }
    }
}



// std::vector<int> PmergeMe::genRandNums(int size){
// 	// Seed with a real random value, if available
//     std::random_device rd;
//     // Initialize the random number generator with the seed
//     std::mt19937 generator(rd());
//     // Define the range for random integers, for example, between 1 and 100
//     std::uniform_int_distribution<int> distribution(-1000, 1000);
//     // Create a vector to store the random numbers
//     std::vector<int> nums;
//     // Generate 10,000 random numbers and add them to the vector
//     for (int i = 0; i < size; ++i) {
//         nums.push_back(distribution(generator));
//     }
// 	return nums;
// }

// template<class T>
// void PmergeMe::printContainer(const T& container) {
// 	for (auto it = container.begin(); it != container.end(); ++it) {
// 		std::cout << *it << ' ';
// 	}
// 	std::cout << "\n";
// }
