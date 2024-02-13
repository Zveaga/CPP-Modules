/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 12:46:44 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/13 11:02:57 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed()
{
	fixed_value = 0;
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &other)
{
	this->fixed_value = other.fixed_value;
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->fixed_value = other.fixed_value;
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (fixed_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "getRawBits member function called\n";
	fixed_value = raw;
}
