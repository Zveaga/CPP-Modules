/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/02 16:42:20 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/02 16:53:44 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"

// --Conststructors-- //

Form::Form(): _name("DEFAULT"), _is_signed(false), _sign_grade(0), _exec_grade(0)
{
	std::cout << _name << " costructed by basic constructor\n";
}


Form::Form(const Form &object): _name(object._name), _sign_grade(object._sign_grade), _exec_grade(object._exec_grade)
{
	std::cout << _name << " constructed by copy constructor\n";

}// --Destructor-- //

// --Overloads-- //

Form &Form::operator=(const Form &object)
{
	// no need to copy const values!!
	return (*this);
}

// --Member Functions-- //

// --Exceptions-- //
