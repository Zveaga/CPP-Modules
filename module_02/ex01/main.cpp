/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 12:45:18 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/12 19:27:10 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

int main(void)
{
	Fixed	a;				//-> default constructor called
	Fixed const b(10);		//-> int constructor called
	Fixed const c(42.42f);	//-> float constructor called
	Fixed const d(b);		//-> copy contstuctor
	
	a = Fixed(1234.4321f);	//-> assignment operator and float constructor called
	// a = Fixed(1234.9f);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	// // std::cout << "a is ";
	// //a.operator<<(std::cout) << std::endl;
	
	return (0);
}
