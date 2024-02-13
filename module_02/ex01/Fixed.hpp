/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 12:46:41 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/13 11:03:52 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<ostream>
#include<cmath>

class Fixed {
	private:
		int 				fixed_value;
		static const int	fractional_bits = 8;
	public:
		std::ostream& operator<<(std::ostream& os);
		Fixed &operator=(const Fixed &object);
		Fixed();
		Fixed(const Fixed &object);
		/**
 		* Int constructor
 		* Initializes integer value to fixed-point value
 		*/
		Fixed(const int integer_value);
		/**
 		* Float constructor
 		* Initializes floating-point value to fixed-point value 
		*/
		Fixed(const float float_value);
		~Fixed();
		
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &object);
