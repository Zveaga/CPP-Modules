/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/05/22 21:22:41 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Array.hpp"

int main(void)
{	
	std::cout << "\n========TEST========\n";

	
	std::cout << "\n---------Int---------\n\n";
	// Array <int> intArray;
	Array <int> intArray(5);
	//std::cout << "Array size: " << intArray.size() << "\n";

	std::cout << "\n---------Copy Constructor---------\n\n";
	Array <int> intArray1(intArray);

	std::cout << "\n---------Copy Assignment Operator---------\n\n"; 
	Array <int> intArray2(5);
	intArray2 = intArray1;
	
	std::cout << "\n---------Print Array Address---------\n\n"; 
	intArray.printAddress();
	intArray1.printAddress();
	intArray2.printAddress();

	// std::cout << "\n--------Double---------\n\n";
	// Array <double> doubleArray;

	// std::cout << "\n--------String---------\n\n";
	// Array <std::string> stringArray;
	
	std::cout << "\n========END========\n";
	return (0);
}
