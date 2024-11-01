#ifndef P_MERGE_ME_HPP
# define P_MERGE_ME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <time.h>

class PmergeMe
{
	private:
		std::vector<int> 	_vec;
		std::list<int> 		_list;
	public:
		// --Conststructors-- //
		PmergeMe();
		PmergeMe(const PmergeMe& obj);
		// --Destructor-- //
		~PmergeMe();
		// --Overloads-- //
		PmergeMe& operator=(const PmergeMe& obj);
		// --Setters-- //
		// --Getters-- //
		// --Member Functions-- //
		// --Exceptions-- //
};


#endif
