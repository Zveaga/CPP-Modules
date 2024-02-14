/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 12:45:18 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/14 09:59:54 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

int main(void)
{
	// -- Intra test -- //
	
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max(a, b) << std::endl;
	
	// -- Own test -- //
	// Fixed a(35.44f);
	// Fixed b(10.032f);
	
	// std::cout << a << std::endl;
	// std::cout << --a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a-- << std::endl;
	// std::cout << a << std::endl;
	// std::cout << Fixed::max(a, b) << std::endl;
	// std::cout << Fixed::min(a, b) << std::endl;
	
	// --Comparison overloads-- //
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

	// --Arithmetic overloads-- //
	// std::cout << a + b << std::endl;
	// std::cout << a - b << std::endl;
	// std::cout << a * b << std::endl;
	// std::cout << a / b << std::endl;

	return (0);
}
