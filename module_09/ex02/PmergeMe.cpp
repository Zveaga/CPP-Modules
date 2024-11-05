/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/01 20:12:53 by rares         #+#    #+#                 */
/*   Updated: 2024/11/05 18:07:00 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Helper to merge vectors based on Ford-Johnson algorithm requirements
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

std::vector<int> PmergeMe::sortVec(const std::vector<int>& vec) {
    if (vec.size() <= 1)
		return vec;
    // Ford-Johnson sorting steps
    std::vector<int> pairedIndices(vec.size(), 0);
    for (size_t i = 0; i < vec.size(); i += 2) {
        if (i + 1 < vec.size()) {
            pairedIndices[i / 2] = std::min(vec[i], vec[i + 1]);
            pairedIndices[vec.size() / 2 + i / 2] = std::max(vec[i], vec[i + 1]);
        } else {
            pairedIndices[i / 2] = vec[i];
        }
    }

    // Recursive sorting on paired minimums
    std::vector<int> minSorted = sortVec(std::vector<int>(pairedIndices.begin(), pairedIndices.begin() + vec.size() / 2));
    std::vector<int> maxSorted = sortVec(std::vector<int>(pairedIndices.begin() + vec.size() / 2, pairedIndices.end()));

    // Final merging with Ford-Johnson rules
    return mergeVec(minSorted, maxSorted);
}

// Helper to merge lists based on Ford-Johnson algorithm requirements
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

    // Recursive sort of minimum and maximum lists
    pairedMin = sortList(pairedMin);
    pairedMax = sortList(pairedMax);

    // Final merging with Ford-Johnson rules
    return mergeList(pairedMin, pairedMax);
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
