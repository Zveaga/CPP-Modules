/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/13 19:21:26 by rares         #+#    #+#                 */
/*   Updated: 2024/10/23 12:58:54 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T, typename L>
void printArrayElem(T *arrayAddress, L arrayLength)
{
	if (!arrayAddress)
		return ;
	for (L i = 0; i < arrayLength; ++i)
		std::cout << arrayAddress[i] << "\n";
}

template <typename T, typename L>
void iter(T *arrayAddress, L arrayLength, void (*functionToCall)(T*, L))
{
	std::cout << "arrayAddress: " << arrayAddress << "\n";
	std::cout << "arrayLength: " << arrayLength << "\n";
	functionToCall(arrayAddress, arrayLength);
}

#endif
