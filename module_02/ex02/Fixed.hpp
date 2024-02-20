/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 12:46:41 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/14 09:51:43 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <iomanip>
#include<ostream>
#include<cmath>

class Fixed {
	private:
		int 				fixed_value;
		static const int	fractional_bits = 8;
	public:
		// --Constructors-- //
		Fixed();						//--> basic constructor
		Fixed(const Fixed &object);		//--> copy constructor
		Fixed(const int integer_value);	//--> int constructor
		Fixed(const float float_value);	//--> float constructor
		~Fixed();						//--> destructor
		// --Copy assignment overload-- //
		Fixed &operator=(const Fixed &object);
		// --Increment/Decrement overloads-- //
		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);
		// --Member functions-- //
		int		getRawBits(void) const;
		void 	setRawBits(int const raw);
		float 	toFloat(void) const;
		int 	toInt(void) const;
		static Fixed &min(Fixed &object1, Fixed &object2);
		static const Fixed &min(const Fixed &object1, const Fixed &object2);
		static Fixed &max(Fixed &object1, Fixed &object2);
		static const Fixed &max(const Fixed &object1, const Fixed &object2);
};


// --Overload operators (non-members)--
std::ostream &operator<<(std::ostream &os, const Fixed &object); // --> non-member
// std::ostream& operator<<(std::ostream& os);                      --> member

// --Comparison operators overload-- //
bool operator>(const Fixed &object1, const Fixed &object2);
bool operator<(const Fixed &object1, const Fixed &object2);
bool operator>=(const Fixed &object1, const Fixed &object2);
bool operator<=(const Fixed &object1, const Fixed &object2);
bool operator==(const Fixed &object1, const Fixed &object2);
bool operator!=(const Fixed &object1, const Fixed &object2);

// --Arithmetic operators overload-- //

float operator+(const Fixed &object1, const Fixed &object2);
float operator-(const Fixed &object1, const Fixed &object2);
float operator*(const Fixed &object1, const Fixed &object2);
float operator/(const Fixed &object1, const Fixed &object2);