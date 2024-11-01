/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/01 20:12:53 by rares         #+#    #+#                 */
/*   Updated: 2024/11/01 20:30:35 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<int> PmergeMe::mergeVec(std::vector<int> left, std::vector<int> right) {
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
	

std::vector<int> PmergeMe::sortVec(std::vector<int>& vec) {

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

std::vector<int> PmergeMe::genRandNums(int size){
	// Seed with a real random value, if available
    std::random_device rd;
    // Initialize the random number generator with the seed
    std::mt19937 generator(rd());
    // Define the range for random integers, for example, between 1 and 100
    std::uniform_int_distribution<int> distribution(-1000, 1000);
    // Create a vector to store the random numbers
    std::vector<int> nums;
    // Generate 10,000 random numbers and add them to the vector
    for (int i = 0; i < size; ++i) {
        nums.push_back(distribution(generator));
    }
	return nums;
}


void PmergeMe::printVec(std::vector<int> vec) {
	for (int n : vec) {
		std::cout << n << ' ';
	}
	std::cout << "\n";
}
