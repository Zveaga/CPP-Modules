#ifndef P_MERGE_ME_HPP
# define P_MERGE_ME_HPP

#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <random>
#include <sstream>
#include <chrono>
#include <string>

class PmergeMe
{
	private:
		// std::vector<int>	mergeVec(const std::vector<int>& left, const std::vector<int>& right);
		// std::list<int> 		mergeList(const std::list<int>& left, const std::list<int>& right);
	public:
		// --Conststructors-- //
		PmergeMe() = default;
		PmergeMe(const PmergeMe& obj) = default;
		// --Destructor-- //
		~PmergeMe() = default;
		// --Overloads-- //
		PmergeMe& operator=(const PmergeMe& obj) = default;
		// --Member Functions-- //
		// Helper to merge vectors based on Ford-Johnson algorithm requirements
    	std::vector<int> mergeVec(const std::vector<int>& left, const std::vector<int>& right);
    	// Helper to merge lists based on Ford-Johnson algorithm requirements
    	std::list<int> mergeList(const std::list<int>& left, const std::list<int>& right);
    	// Function to sort vectors
    	std::vector<int> sortVec(const std::vector<int>& vec);
    	// Function to sort lists
    	std::list<int> sortList(const std::list<int>& lst);
    	// Helper function to calculate Jacobsthal sequence
    	int jacobS(int n);
    	// Helper function to insert a value in sorted vector using binary search
    	void binaryVecInsert(std::vector<int>& chainA, int start, int len, int value);
    	// Helper function to insert a value in sorted list using binary search
    	void binaryListInsert(std::list<int>& chainA, int value);
    	// Sorting the vectors
    	void insertVecSort(std::vector<int>& chainA, std::vector<int>& chainB);
    	// Sorting the lists
    	void insertListSort(std::list<int>& chainA, const std::list<int>& chainB);
    	// Parsing numbers from command-line arguments into vectors and lists
    	template<typename T>
    	T parseNumbers(int argc, char **argv);
    	// Function to handle and sort the input arguments for vectors
    	std::vector<int> sortVector(int argc, char **argv);
    	// Function to handle and sort the input arguments for lists
    	std::list<int> sortList(int argc, char **argv);
    	// Pairing elements for sorting the vectors
    	void makeVecPairs(std::vector<int>& input, std::vector<int>& chainA, std::vector<int>& chainB);
    	// Pairing elements for sorting the lists
    	void makeListPairs(std::list<int>& input, std::list<int>& chainA, std::list<int>& chainB);
		void				printDuration(std::chrono::duration<double> durarion, const std::string& containerType, int size);
		void				parseInput(const std::vector<std::string>& input);
		template<class T>
		void printContainer(const T& container, const std::string& moment) {
			std::cout << moment << ": ";
			for (auto it = container.begin(); it != container.end(); ++it) {
				std::cout << *it << ' ';
			}
			std::cout << "\n\n";
		};

		// template<class T>
		// T createContainer(const std::string& str) {
		// 	std::istringstream stream(str);
		// 	T newContainer;
		// 	int number;
		// 	while (stream >> number) {
		// 		newContainer.push_back(number);
		// 	}
		// 	return newContainer;
		// }

		template<class T>
		T createContainer(const std::vector<std::string>& input) {
			T newContainer;
			for (const std::string& s : input)
				newContainer.push_back(std::stoi(s));
			return newContainer;
		}

		template<class T>
		T genRandNums(int size) {
			// Seed with a real random value, if available
    		std::random_device rd;
    		// Initialize the random number generator with the seed
    		std::mt19937 generator(rd());
    		// Define the range for random integers, for example, between 1 and 100
    		std::uniform_int_distribution<int> distribution(-1000, 1000);
    		// Create a vector to store the random numbers
    		T nums;
    		// Generate 10,000 random numbers and add them to the vector
    		for (int i = 0; i < size; ++i) {
    		    nums.push_back(distribution(generator));
    		}
			return nums;
		}
};


#endif
