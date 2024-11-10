#include "PmergeMe.hpp"
#include <algorithm>
#include <chrono>
#include <iostream>
#include <list>
#include <vector>

/* ==================== CONSTRUCTOR AND ASSIGNMENT ==================== */

const PmergeMe& PmergeMe::operator=(const PmergeMe& other){
	(void)other;
	return *this;
}

/* ==================== VECTOR OPERATIONS ==================== */

std::vector<int> PmergeMe::sortVector(const std::vector<int>& input)
{
    std::vector<int> chainA, chainB, numbers = input;
    splitToPairs(numbers, chainA, chainB);
    sortAndInsertPairs(chainA, chainB);
    return chainA;
}

void PmergeMe::splitToPairs(std::vector<int>& input, std::vector<int>& chainA, std::vector<int>& chainB)
{
    std::vector<std::vector<int>> pairs;
    int extraValue = 0;

    if (input.size() % 2 == 1)
    {
        extraValue = input.back();
        input.pop_back();
    }

    for (size_t i = 0; i < input.size(); i += 2)
    {
        std::vector<int> currentPair = {input[i], input[i + 1]};
        std::sort(currentPair.begin(), currentPair.end());
        pairs.push_back(currentPair);
    }

    std::sort(pairs.begin(), pairs.end(), [](const auto& a, const auto& b) { return a[1] < b[1]; });

    for (const auto& pair : pairs)
    {
        chainA.push_back(pair[1]);
        chainB.push_back(pair[0]);
    }

    if (extraValue != 0)
        chainB.push_back(extraValue);
}

void PmergeMe::recursiveBinaryInsert(std::vector<int>& chainA, int start, int end, int value)
{
    if (start >= end)
    {
        chainA.insert(chainA.begin() + start, value);
        return;
    }

    int mid = start + (end - start) / 2;

    if (chainA[mid] < value)
        recursiveBinaryInsert(chainA, mid + 1, end, value);
    else if (chainA[mid] > value)
        recursiveBinaryInsert(chainA, start, mid, value);
    else
        chainA.insert(chainA.begin() + mid, value);
}

void PmergeMe::sortAndInsertPairs(std::vector<int>& chainA, std::vector<int>& chainB)
{
    int index = 1, sequenceIndex = 1, len = chainB.size();
    chainA.insert(chainA.begin(), chainB.front());

    while (index < len)
    {
        for (int j = jacobS(sequenceIndex); j > 0 && j > jacobS(sequenceIndex - 1); --j)
        {
            if (j >= len)
                j = len - 1;

            recursiveBinaryInsert(chainA, 0, chainA.size(), chainB[j]);
            ++index;
        }
        ++sequenceIndex;
    }
}

/* ==================== LIST OPERATIONS ==================== */

std::list<int> PmergeMe::sortList(const std::list<int>& input)
{
    std::list<int> chainA, chainB, numbers = input;
    splitListToPairs(numbers, chainA, chainB);
    sortAndInsertListPairs(chainA, chainB);
    return chainA;
}

void PmergeMe::splitListToPairs(std::list<int>& input, std::list<int>& chainA, std::list<int>& chainB)
{
    std::list<std::pair<int, int>> pairs;
    int extraValue = 0;

    if (input.size() % 2 == 1)
    {
        extraValue = input.back();
        input.pop_back();
    }

    auto it = input.begin();
    while (it != input.end())
    {
        int first = *it++;
        int second = *it++;
        pairs.emplace_back(std::min(first, second), std::max(first, second));
    }

    pairs.sort([](const auto& a, const auto& b) { return a.second < b.second; });

    for (const auto& pair : pairs)
    {
        chainA.push_back(pair.second);
        chainB.push_back(pair.first);
    }

    if (extraValue != 0)
        chainB.push_back(extraValue);
}

void PmergeMe::recursiveListInsert(std::list<int>& chainA, int value)
{
    auto it = std::lower_bound(chainA.begin(), chainA.end(), value);
    chainA.insert(it, value);
}

void PmergeMe::sortAndInsertListPairs(std::list<int>& chainA, const std::list<int>& chainB)
{
    auto itB = chainB.begin();
    chainA.insert(chainA.begin(), *itB++);
    int index = 1, sequenceIndex = 1, len = chainB.size();

    while (index < len)
    {
        for (int j = jacobS(sequenceIndex); j > 0 && j > jacobS(sequenceIndex - 1); --j)
        {
            if (j >= len)
                j = len - 1;

            auto it = std::next(chainB.begin(), j);
            recursiveListInsert(chainA, *it);
            ++index;
        }
        ++sequenceIndex;
    }
}

/* ==================== COMMON METHODS ==================== */

int PmergeMe::jacobS(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int prev = 0, current = 1;
    for (int i = 2; i < n; ++i)
    {
        int next = current + 2 * prev;
        prev = current;
        current = next;
    }
    return current;
}

// void PmergeMe::printContainer(const std::vector<std::string>& container, const std::string& label)
// {
//     std::cout << label << ":\t";
//     for (const auto& val : container)
//         std::cout << val << " ";
//     std::cout << "\n";
// }

// void PmergeMe::printContainer(const std::vector<int>& container, const std::string& label)
// {
//     std::cout << label << ":\t";
//     for (int val : container)
//         std::cout << val << " ";
//     std::cout << "\n";
// }

// void PmergeMe::printContainer(const std::list<int>& container, const std::string& label)
// {
//     std::cout << label << ":\t";
//     for (int val : container)
//         std::cout << val << " ";
//     std::cout << "\n";
// }

// void PmergeMe::printDuration(const std::chrono::duration<double>& duration, const std::string& type, size_t size)
// {
//     std::cout << "Time to process a " << size << "-element " << type << " : " << duration.count() << "s\n";
// }

// void PmergeMe::parseInput(const std::vector<std::string>& input)
// {
//     for (const auto& str : input)
//     {
//         try
//         {
//             int num = std::stoi(str);
//             if (num < 0)
//                 throw NegativeValueError();
//         }
//         catch (const std::exception& e)
//         {
//             throw std::invalid_argument("Invalid input: contains non-integer or negative values.");
//         }
//     }
// }

// const char* PmergeMe::NegativeValueError::what() const noexcept
// {
//     return "Error: Negative values are not allowed.";
// }



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
