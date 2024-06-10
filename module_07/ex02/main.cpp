/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/06/07 16:36:57 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Array.hpp"


int main(void)
{	
	std::cout << "\n========TEST========\n";

	std::cout << "\n------Empty Array------\n\n";
	
	Array <int>emptyArray;
	emptyArray.printArray();

	std::cout << "\n------------Int------------\n\n";
	
	Array <int> intArray(10);
	intArray.fillArray(1);
	intArray.printArray();
	std::cout << "\n------Try Out Of Bounds------\n\n";
	intArray.tryOutOfBounds();

	std::cout << "\n----------String----------\n\n";
	Array <std::string> strArray(4);
	strArray.fillArray("string");
	strArray.printArray();
	
	std::cout << "\n------Copy Constructor------\n\n";
	Array <float> floatArray(5);
	floatArray.fillArray(1.22);
	Array <float> floatArray1(floatArray);
	floatArray1.printArray();

	std::cout << "\n---------Copy Assignment Operator---------\n\n"; 
	emptyArray = intArray;
	emptyArray.printArray();
	
	std::cout << "\n---------Print Array Address---------\n\n";
	
	intArray.printAddress();
	floatArray1.printAddress();
	emptyArray.printAddress();

	std::cout << "\n========END========\n";
	return (0);
}
