/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: raanghel <raanghel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/31 15:51:39 by raanghel      #+#    #+#                 */
/*   Updated: 2024/10/31 15:51:40 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

template <typename T>
typename T::const_iterator easyfind(const T &toFind, int toSearch)
{
	typename T::const_iterator it= std::find(toFind.begin(), toFind.end(), toSearch);
	if (it == toFind.end())
		throw std::out_of_range("Integer not found!");
	return (it);
}


#endif