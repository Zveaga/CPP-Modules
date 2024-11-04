/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/01 20:12:53 by rares         #+#    #+#                 */
/*   Updated: 2024/11/04 13:25:28 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<int> PmergeMe::mergeVec(const std::vector<int>& left, const std::vector<int>& right) {
    std::vector<int> result;
    size_t i = 0, j = 0;

    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            result.push_back(left[i]);
            ++i;
        } else {
            result.push_back(right[j]);
            ++j;
        }
    }

    // Append remaining elements
    while (i < left.size()) {
        result.push_back(left[i++]);
    }
    while (j < right.size()) {
        result.push_back(right[j++]);
    }

    return result;
}
	

std::vector<int> PmergeMe::sortVec(const std::vector<int>& vec) {

	// Initialize single-element lists
    std::vector<std::vector<int>> sortedLists(vec.size());
    for (size_t i = 0; i < vec.size(); ++i) {
        sortedLists[i] = {vec[i]};
    }

    // Merge sorted lists
    while (sortedLists.size() > 1) {
        std::vector<std::vector<int>> newSortedLists;
        for (size_t i = 0; i < sortedLists.size(); i += 2) {
            if (i + 1 < sortedLists.size()) {
                newSortedLists.push_back(this->mergeVec(sortedLists[i], sortedLists[i + 1]));
            } else {
                newSortedLists.push_back(sortedLists[i]);
            }
        }
        sortedLists = newSortedLists;
    }

    return sortedLists[0];
}


std::list<int> PmergeMe::mergeList(const std::list<int>& left, const std::list<int>& right) {
    std::list<int> result;
    auto it1 = left.begin();
    auto it2 = right.begin();

    while (it1 != left.end() && it2 != right.end()) {
        if (*it1 <= *it2) {
            result.push_back(*it1);
            ++it1;
        } else {
            result.push_back(*it2);
            ++it2;
        }
    }
    // Append remaining elements
    result.insert(result.end(), it1, left.end());
    result.insert(result.end(), it2, right.end());
    return result;
}

std::list<int> PmergeMe::sortList(const std::list<int>& lst) {
    std::list<std::list<int>> sortedLists;
    for (int element : lst) {
        sortedLists.push_back({element});
    }

    // Merge sorted lists
    while (sortedLists.size() > 1) {
        std::list<std::list<int>> newSortedLists;
        auto it = sortedLists.begin();
        while (it != sortedLists.end()) {
            auto nextIt = std::next(it);
            if (nextIt != sortedLists.end()) {
                newSortedLists.push_back(this->mergeList(*it, *nextIt));
                std::advance(it, 2); // Move to next pair
            } else {
                newSortedLists.push_back(*it);
                ++it; // Move to next single element
            }
        }
        sortedLists = newSortedLists;
    }

    return sortedLists.front();
}


void PmergeMe::printDuration(std::chrono::duration<double> duration, const std::string& containerType, int size) {
	std::cout 	<< "Time to process a range of "
				<< size << " elements with std::"
				<< containerType
				<< " : " << std::fixed << std::setprecision(6)
				<< duration.count() << " seconds\n";
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
