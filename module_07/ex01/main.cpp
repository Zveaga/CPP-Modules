/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/05/14 20:27:45 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"iter.hpp"

int main(void)
{	
	std::cout << "\n========TEST========\n";

	int arrayInt[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	double arrayDouble[10] = {1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5, 9.5, 10.5};
	std::string arrayString[10] = {"1s", "2s", "3s", "4s", "5s", "6s", "7s", "8s", "9s", "10s"};

	int arrayLength = 10;
	
	int *arrayIntAddress = arrayInt;
	double *arrayDoubleAddress = arrayDouble;
	std::string *arrayStringAddress = arrayString;

	std::cout << "\n---------Int---------\n\n";
	::iter(arrayIntAddress, arrayLength, printArrayElem);
	std::cout << "\n--------Double---------\n\n";
	::iter(arrayDoubleAddress, arrayLength, printArrayElem);
	std::cout << "\n--------String---------\n\n";
	::iter(arrayStringAddress, arrayLength, printArrayElem);

	
	std::cout << "\n========END========\n";
	return (0);
}
