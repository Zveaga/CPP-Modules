/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/07/29 16:18:02 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Serializer.hpp"

int main(void)
{
	Data originalData;
	Data* newData;
	uintptr_t ptr;
	
	originalData.intValue = 7;
	originalData.charValue = 'a';
	originalData.floatValue = 7.7f;
	originalData.stringValue = "String";
	
	std::cout << "-----------------------------------------\n\n";
	
	std::cout << "Original data address: " << &originalData << "\n";
	std::cout
		<< "Values before serialization:\n\n"
		<< originalData.intValue << "\n"
		<< originalData.charValue << "\n"
		<< originalData.floatValue << "\n"
		<< originalData.stringValue << "\n";
	ptr = Serializer::serialize(&originalData);
	
	std::cout << "\n-----------------------------------------\n\n";	
	
	std::cout << "Value of ptr after serialization:\n\n" << std::hex << ptr << "\n";
	
	newData = Serializer::deserialize(ptr);
	
	std::cout << "\n-----------------------------------------\n\n";	
	
	std::cout << "New data address: " << &newData << "\n";
	std::cout
		<< "Deserialized values:\n\n"
		<< newData->intValue << "\n"
		<< newData->charValue << "\n"
		<< newData->floatValue << "\n"
		<< newData->stringValue << "\n";
		
	std::cout << "\n-----------------------------------------\n\n";	

	return (0);
}