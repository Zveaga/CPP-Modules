#ifndef P_MERGE_ME_HPP
# define P_MERGE_ME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <time.h>
#include <random>

class PmergeMe
{
	private:
		std::vector<int> 	_vec;
		std::list<int> 		_list;
		std::vector<int> mergeVec(std::vector<int> left, std::vector<int> right);
	public:
		// --Conststructors-- //
		// PmergeMe();
		// PmergeMe(const PmergeMe& obj);
		// --Destructor-- //
		// ~PmergeMe();
		// --Overloads-- //
		// PmergeMe& operator=(const PmergeMe& obj);
		// --Setters-- //
		// --Getters-- //
		// --Member Functions-- //
		// --Exceptions-- //
		std::vector<int> 	sortVec(std::vector<int>& left);
		std::vector<int> 	genRandNums(int size);
		void				printVec(std::vector<int> vec);
};


#endif
