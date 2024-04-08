/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 12:45:18 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/05 17:10:41 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

int main(void)
{
	Fixed	a;				//-> default constructor called
	std::cout << "----------------------------\n";
	Fixed const b(10);		//-> int constructor called
	std::cout << "----------------------------\n";
	Fixed const c(42.42f);	//-> float constructor called
	std::cout << "----------------------------\n";
	Fixed const d(b);		//-> copy contstuctor
	std::cout << "----------------------------\n";
	
	a = Fixed(1234.4321f);	//-> assignment operator and float constructor called
	std::cout << "----------------------------\n";

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	return (0);
}
