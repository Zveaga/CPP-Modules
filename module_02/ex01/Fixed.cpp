/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 12:46:44 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/12 19:35:06 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

//const int Fixed::fractional_bits = 8;

/**
 * --Default constructor--
 * Initializes fixed_value to 0
 */
Fixed::Fixed()
{
	this->fixed_value = 0;
	std::cout << "Default constructor called\n";
}

/**
 * --Destructor--
 */
Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

/**
 *--Copy constructor--
 * Initializes the object using another object of the same class
 */
Fixed::Fixed(const Fixed &object)
{
	this->fixed_value = object.fixed_value;
	std::cout << "Copy constructor called\n";
}

/**
 * --Copy assignment operator (overload)--
 * Assigns the already initialized object to another object of the same class
 */
Fixed &Fixed::operator=(const Fixed &object)
{
	if (this != &object)
		this->fixed_value = object.fixed_value;
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

std::ostream& Fixed::operator<<(std::ostream& os)
{
	os << this->toFloat();
	return (os);
}

/**
* Int constructor
* Initializes integer value to fixed-point value
*/
Fixed::Fixed(const int integer_value)
{
	this->fixed_value = integer_value << fractional_bits;
	std::cout << "Int constructor called\n";
}

/**
* Float constructor
* Initializes floating-point value to fixed-point value 
*/
Fixed::Fixed(const float float_value)
{
	this->fixed_value = static_cast<int>(roundf(float_value * (1 << fractional_bits)));
	std::cout << "Float constructor called\n";
}

/**
 * Converts fixed-point value to floating-point value
*/
float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->fixed_value) / (1 << fractional_bits));
}

/**
 *
 *  Converts fixed-point value to integer valuemake
*/
int Fixed::toInt(void) const
{
	return(static_cast<int>(roundf(static_cast<float>(this->fixed_value) / (1 << fractional_bits))));
}

/**
 * --Member Function--
 * returns fixed_value
 */
int Fixed::getRawBits(void) 
{
	std::cout << "getRawBits member function called\n";
	return (fixed_value);
}

/**
 * --Member Function--
 * sets fixed_value as raw
 */
void Fixed::setRawBits(int const raw)
{
	std::cout << "getRawBits member function called\n";
	fixed_value = raw;
}

std::ostream &operator<<(std::ostream &os, const Fixed &object)
{
	os << object.toFloat();
	return (os);
}
