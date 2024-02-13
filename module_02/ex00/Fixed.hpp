/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 12:46:41 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/13 11:02:46 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

class Fixed {
	private:
		int 				fixed_value;
		static const int	fractional_bits;
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		~Fixed();
};
