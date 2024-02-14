/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 12:46:44 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/14 18:53:45 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

const float epsilon = 1.0f/256.0f;

/**
 * --Default constructor--
 * Initializes fixed_value to 0
 */
Fixed::Fixed()
{
	this->fixed_value = 0;
	//std::cout << "Default constructor called\n";
}

/**
* Int constructor
* Initializes integer value to fixed-point value
*/
Fixed::Fixed(const int integer_value)
{
	this->fixed_value = integer_value << fractional_bits;
	// std::cout << "Int constructor called\n";
}

/**
* Float constructor
* Initializes floating-point value to fixed-point value 
*/
Fixed::Fixed(const float float_value)
{
	this->fixed_value = static_cast<int>(roundf(float_value * (1 << fractional_bits)));
	// std::cout << "Float constructor called\n";
}

/**
 * --Destructor--
 */
Fixed::~Fixed()
{
	//std::cout << "Destructor called\n";
}

/**
 *--Copy constructor--
 * Initializes the object using another object of the same class
 */
Fixed::Fixed(const Fixed &object)
{
	this->fixed_value = object.fixed_value;
	//std::cout << "Copy constructor called\n";
}

// -------Member Functions-------//

/**
 * Converts fixed-point value to floating-point value
*/
float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->fixed_value) / (1 << fractional_bits));
}

/**
 *  Converts fixed-point value to integer value
*/
int Fixed::toInt(void) const
{
	return(static_cast<int>(roundf(static_cast<float>(this->fixed_value) / (1 << fractional_bits))));
}

/**
 * returns fixed_value
 */
int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called\n";
	return (fixed_value);
}

/**
 * sets fixed_value as raw
 */
void Fixed::setRawBits(int const raw)
{
	//std::cout << "getRawBits member function called\n";
	fixed_value = raw;
}

Fixed &Fixed::min(Fixed &object1, Fixed &object2)
{
	if (object1 < object2)
		return (object1);
	else
		return (object2);
}

const Fixed &Fixed::min(const Fixed &object1, const Fixed &object2)
{
	if (object1 < object2)
		return (object1);
	else
		return (object2);
}

Fixed &Fixed::max(Fixed &object1, Fixed &object2)
{
	if (object1 > object2)
		return (object1);
	else
		return (object2);
}

const Fixed &Fixed::max(const Fixed &object1, const Fixed &object2)
{
	if (object1 > object2)
		return (object1);
	else
		return (object2);
}

// -------Member Overloads-------//

/**
 * --Copy assignment operator (overload)--
 * Assigns the already initialized object to another object of the same class
 */
Fixed &Fixed::operator=(const Fixed &object)
{
	if (this != &object)
		this->fixed_value = object.fixed_value;
	//std::cout << "Copy assignment operator called\n";
	return (*this);
}

// --Increment/Decrement operators overloads-- //
Fixed &Fixed::operator++()
{
	this->fixed_value += static_cast<int>(roundf(epsilon * (1 << fractional_bits)));
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	
	this->fixed_value += static_cast<int>(roundf(epsilon * (1 << fractional_bits)));
	return (temp);
}

Fixed &Fixed::operator--()
{
	this->fixed_value -= static_cast<int>(roundf(epsilon * (1 << fractional_bits)));
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	
	this->fixed_value -= static_cast<int>(roundf(epsilon * (1 << fractional_bits)));
	return(temp);
}


// std::ostream& Fixed::operator<<(std::ostream& os)
// {
// 	os << this->toFloat();
// 	return (os);
// }

// -------Non-Member Overloads-------//

std::ostream &operator<<(std::ostream &os, const Fixed &object)
{
	os << object.toFloat();
	return (os);
}

// --Comparison operators overloads-- //
bool operator>(const Fixed &object1, const Fixed &object2)
{
	return (object1.getRawBits() > object2.getRawBits());
}

bool operator<(const Fixed &object1, const Fixed &object2)
{
	return (object1.getRawBits() < object2.getRawBits());
}

bool operator>=(const Fixed &object1, const Fixed &object2)
{
	return (object1.getRawBits() >= object2.getRawBits());
}

bool operator<=(const Fixed &object1, const Fixed &object2)
{
	return (object1.getRawBits() <= object2.getRawBits());
}

bool operator==(const Fixed &object1, const Fixed &object2)
{
	return (object1.getRawBits() == object2.getRawBits());
}

bool operator!=(const Fixed &object1, const Fixed &object2)
{
	return (object1.getRawBits() != object2.getRawBits());
}

// --Arithmetic operators overloads-- //
float operator+(const Fixed &object1, const Fixed &object2)
{
	return (object1.toFloat() + object2.toFloat());
}

float operator-(const Fixed &object1, const Fixed &object2)
{
	return (object1.toFloat() - object2.toFloat());
}

float operator*(const Fixed &object1, const Fixed &object2)
{
	return (object1.toFloat() * object2.toFloat());
}

float operator/(const Fixed &object1, const Fixed &object2)
{
	return (object1.toFloat() / object2.toFloat());
}

