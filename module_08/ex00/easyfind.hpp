#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
typename T::const_iterator easyfind(const T &toFind, int toSearch)
{
	typename T::const_iterator it= std::find(toFind.begin(), toFind.end(), toSearch);
	if (it == toFind.end())
		throw std::out_of_range("Integer no found!");
	return (it);
}


#endif