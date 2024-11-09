/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 17:43:44 by coxer         #+#    #+#                 */
/*   Updated: 2024/11/09 20:31:19 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_MERGE_ME_HPP
# define P_MERGE_ME_HPP

#include <algorithm>
#include <chrono>
#include <exception>
#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <vector>

// using durType = std::chrono::microseconds;
// using vec = std::vector<int>;
// using li = std::list<int>;

class PmergeMe
{
	public:

	// --Conststructors-- //
    PmergeMe() = default;
    PmergeMe(const PmergeMe& other) = default;
	// --Destructor-- //
    ~PmergeMe() = default;
	// --Overloads-- //
    const PmergeMe& operator=(const PmergeMe& other);
	// --Member Functions-- //
    std::vector<int> sortVector(const std::vector<int>& input);
    void splitToPairs(std::vector<int>& input, std::vector<int>& chainA, std::vector<int>& chainB);
    void recursiveBinaryInsert(std::vector<int>& chainA, int start, int end, int value);
    void sortAndInsertPairs(std::vector<int>& chainA, std::vector<int>& chainB);
    std::list<int> sortList(const std::list<int>& input);
    void splitListToPairs(std::list<int>& input, std::list<int>& chainA, std::list<int>& chainB);
    void recursiveListInsert(std::list<int>& chainA, int value);
    void sortAndInsertListPairs(std::list<int>& chainA, const std::list<int>& chainB);
    int jacobS(int n);
    template <typename Container>
    Container createContainer(const std::vector<std::string>& inputStrings);
    void printContainer(const std::vector<std::string>& container, const std::string& label);
    void printContainer(const std::vector<int>& container, const std::string& label);
    void printContainer(const std::list<int>& container, const std::string& label);
    void printDuration(const std::chrono::duration<double>& duration, const std::string& type, size_t size);

	// --Exceptions-- //
    class NegativeValueError : public std::exception
    {
    public:
        const char* what() const noexcept override;
    };
    void parseInput(const std::vector<std::string>& input);
};

// Template implementation
template <typename Container>
Container PmergeMe::createContainer(const std::vector<std::string>& inputStrings)
{
    Container container;
    for (const auto& str : inputStrings)
    {
        int num = std::stoi(str);
        if (num < 0)
            throw NegativeValueError();
        container.push_back(num);
    }
    return container;
}

#endif




// #include <iostream>
// #include <iomanip>
// #include <vector>
// #include <list>
// #include <random>
// #include <sstream>
// #include <chrono>
// #include <string>

// class PmergeMe
// {
// 	private:
// 		// Helper to merge vectors based on Ford-Johnson algorithm requirements
//     	std::vector<int> mergeVec(const std::vector<int>& left, const std::vector<int>& right);
//     	// Helper to merge lists based on Ford-Johnson algorithm requirements
//     	std::list<int> mergeList(const std::list<int>& left, const std::list<int>& right);
//     	// Helper function to calculate Jacobsthal sequence
//     	int jacobS(int n);
//     	// Helper function to insert a value in sorted vector using binary search
//     	void binaryVecInsert(std::vector<int>& chainA, int start, int len, int value);
//     	// Helper function to insert a value in sorted list using binary search
//     	void binaryListInsert(std::list<int>& chainA, int value);
//     	// Sorting the vectors
//     	void insertVecSort(std::vector<int>& chainA, std::vector<int>& chainB);
//     	// Sorting the lists
//     	void insertListSort(std::list<int>& chainA, const std::list<int>& chainB);
// 	public:
// 		// --Conststructors-- //
// 		PmergeMe() = default;
// 		PmergeMe(const PmergeMe& obj) = default;
// 		// --Destructor-- //
// 		~PmergeMe() = default;
// 		// --Overloads-- //
// 		PmergeMe& operator=(const PmergeMe& obj) = default;
// 		// --Member Functions-- //
//     	std::vector<int> sortVec(const std::vector<int>& vec);
//     	std::list<int> sortList(const std::list<int>& lst);
// 		void printDuration(std::chrono::duration<double> durarion, const std::string& containerType, int size);
// 		void parseInput(const std::vector<std::string>& input);
//     	// --Templates-- //
// 		template<class T>
// 		void printContainer(const T& container, const std::string& moment) {
// 			std::cout << moment << ": ";
// 			for (auto it = container.begin(); it != container.end(); ++it) {
// 				std::cout << *it << ' ';
// 			}
// 			std::cout << "\n\n";
// 		};
// 		template<class T>
// 		T createContainer(const std::vector<std::string>& input) {
// 			T newContainer;
// 			for (const std::string& s : input)
// 				newContainer.push_back(std::stoi(s));
// 			return newContainer;
// 		}

// 		// template<class T>
// 		// T createContainer(const std::string& str) {
// 		// 	std::istringstream stream(str);
// 		// 	T newContainer;
// 		// 	int number;
// 		// 	while (stream >> number) {
// 		// 		newContainer.push_back(number);
// 		// 	}
// 		// 	return newContainer;
// 		// }

// 		// template<class T>
// 		// T genRandNums(int size) {
// 		// 	// Seed with a real random value, if available
//     	// 	std::random_device rd;
//     	// 	// Initialize the random number generator with the seed
//     	// 	std::mt19937 generator(rd());
//     	// 	// Define the range for random integers, for example, between 1 and 100
//     	// 	std::uniform_int_distribution<int> distribution(-1000, 1000);
//     	// 	// Create a vector to store the random numbers
//     	// 	T nums;
//     	// 	// Generate 10,000 random numbers and add them to the vector
//     	// 	for (int i = 0; i < size; ++i) {
//     	// 	    nums.push_back(distribution(generator));
//     	// 	}
// 		// 	return nums;
// 		// }
// };