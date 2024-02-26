/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 12:45:18 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/26 17:47:35 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

int main(void)
{
	std::cout << "\n============INTRA TEST=============\n\n";
	
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max(a, b) << std::endl;
	
	
	// std::cout << "\n============OWN TEST=============\n\n";
	// Fixed a(35.44f);
	// Fixed const b(10.032f);
	// std::cout << "--------------------------\n";
	
	// std::cout << a << std::endl;
	// std::cout << --a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a-- << std::endl;
	// std::cout << a << std::endl;
	// std::cout << Fixed::max(a, b) << std::endl;
	// std::cout << Fixed::min(a, b) << std::endl;
	
	// std::cout << "\n=========COMPARISON OVERLOADS=========\n\n";
	// if (a > b)
	// 	std::cout << "a > b\n";
	// if (a < b)
	// 	std::cout << "a < b\n";
	// if (a >= b)
	// 	std::cout << "a >= b\n";
	// if (a <= b)
	// 	std::cout << "a <= b\n";
	// if (a == b)
	// 	std::cout << "a == b\n";
	// if (a != b)
	// 	std::cout << "a != b\n";

	// std::cout << "\n============ARITHMETIC OVERLOADS=============\n\n";
	// std::cout << a + b << std::endl;
	// std::cout << a - b << std::endl;
	// std::cout << a * b << std::endl;
	// std::cout << a / b << std::endl;
	
	std::cout << "--------------------------\n";
	return (0);
}
