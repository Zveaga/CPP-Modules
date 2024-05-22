/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/05/22 18:59:47 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Array.hpp"

int main(void)
{	
	std::cout << "\n========TEST========\n";

	
	std::cout << "\n---------Int---------\n\n";
	// Array <int> intArray;
	Array <int> intArray(10);
	std::cout << "Array size: " << intArray.size() << "\n";
	// std::cout << "\n--------Double---------\n\n";
	// Array <double> doubleArray;

	// std::cout << "\n--------String---------\n\n";
	// Array <std::string> stringArray;
	
	std::cout << "\n========END========\n";
	return (0);
}
