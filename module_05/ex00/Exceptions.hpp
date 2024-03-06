/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Exceptions.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/06 19:31:15 by coxer         #+#    #+#                 */
/*   Updated: 2024/03/06 19:33:21 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTIONS_HPP
# define EXCEPTIONS_HPP

#include<iostream>
#include<exception>

class GradeTooHighException: public std::exception
{
	private:
		const std::string message;
	public:
		// --Overloads-- //
		char *what();
};

#endif
