/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 17:43:44 by coxer         #+#    #+#                 */
/*   Updated: 2024/11/10 15:49:49 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_MERGE_ME_HPP
# define P_MERGE_ME_HPP

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <chrono>
#include <exception>
#include <list>
#include <sstream>

class PmergeMe {
	private:
    	void splitVecToPairs(std::vector<int>& input, std::vector<int>& largeNums, std::vector<int>& smallNums);
    	void splitListToPairs(std::list<int>& input, std::list<int>& largeNums, std::list<int>& smallNums);
    	void binaryInsertVec(std::vector<int>& largeNums, int start, int end, int value);
    	void binaryInsertList(std::list<int>& largeNums, int value);
    	void sortAndInsertVecPairs(std::vector<int>& largeNums, std::vector<int>& smallNums);
    	void sortAndInsertListPairs(std::list<int>& largeNums, const std::list<int>& smallNums);
    	int  jacobsthalSeq(int n);
	public:
		// --Conststructors-- //
    	PmergeMe() = default;
    	PmergeMe(const PmergeMe& other) = default;
		// --Destructor-- //
    	~PmergeMe() = default;
		// --Overloads-- //
    	const PmergeMe& operator=(const PmergeMe& other);
		// --Member Functions-- //
    	std::vector<int> sortVector(std::vector<int>& input);
    	std::list<int> sortList(std::list<int>& input);
    	void printDuration(std::chrono::duration<double> durarion, const std::string& containerType, int size);
    	void parseInput(const std::vector<std::string>& input);
		
		// --Templates-- //
		template<class T>
		void printContainer(const T& container, const std::string& moment) {
			std::cout << moment << ": ";
			for (auto it = container.begin(); it != container.end(); ++it) {
				std::cout << *it << ' ';
			}
			std::cout << "\n\n";
		};
		template<class T>
		T createContainer(const std::vector<std::string>& input) {
			T newContainer;
			for (const std::string& s : input) {
				newContainer.push_back(std::stoi(s));
			}
			return newContainer;
		}
	
};

#endif
