/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Exceptions.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/06 19:32:51 by coxer         #+#    #+#                 */
/*   Updated: 2024/03/06 19:35:48 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Exceptions.hpp"

// --Overloads-- //
char *GradeTooHighException::what()
{
	return ("GRADE TOO HIGH!");
}

// --Conststructors-- //
// --Destructor-- //
// --Member Functions-- //
