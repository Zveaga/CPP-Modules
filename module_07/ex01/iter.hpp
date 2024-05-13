/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/13 19:21:26 by rares         #+#    #+#                 */
/*   Updated: 2024/05/13 19:59:01 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void countArrayElem(T i)
{
	if (!i)
		return ;
	for 
}

template <typename T, typename U, typename Y>
void iter(T arrayAddress, U arrayLength, Y functionToCall)
{
	std::cout << "'iter' function called\n";
	std::cout << "arrayAddress: " << arrayAddress << "\n";
	std::cout << "arrayLength: " << arrayLength << "\n";
	// std::cout << "functionToCall: " << arrayAddress << "\n";
}

#endif
