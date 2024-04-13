/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/02 16:42:20 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/13 16:17:11 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"

// --Conststructors-- //

Form::Form()
	: _name("DEFAULT"), _is_signed(false), _sign_grade(0), _exec_grade(0)
{
	std::cout << _name << " form costructed by basic constructor\n";
}


Form::Form(const Form &object)
	: _name(object._name), _sign_grade(object._sign_grade), _exec_grade(object._exec_grade)
{
	std::cout << _name << " form constructed by copy constructor\n";

}

Form::Form(std::string name, bool is_signed, int sign_grade, int exec_grade)
	:_name(name), _is_signed(is_signed), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (_sign_grade > 150 || _exec_grade > 150)
		throw GradeTooLowException();
	if (_sign_grade < 1 ||  _exec_grade < 1)
		throw GradeTooHighException();
	std::cout << _name << " form constructed by custom constructor\n";
}

// --Destructor-- //

Form::~Form()
{
	std::cout << _name << " destructed\n";
}

// --Overloads-- //

Form &Form::operator=(const Form &object)
{
	// no need to copy const values!!
	return (*this);
}


std::ostream &operator<<(std::ostream &os, const Form &object)
{
	os << object.getName() << " info:\n-form signed: " << object.getIsSigned()
		<< "\n-grade required to sign form: " << object.getSignGrade()
		<< "\n-grade requred to execute form: " << object.getExecGrade()
		<< std::endl; 
	return (os);
}

// --Getters-- //
const std::string &Form::getName() const
{
	return (_name);
}

bool Form::getIsSigned() const
{
	return (_is_signed);
}

int Form::getSignGrade() const
{
	return (_sign_grade);
}

int Form::getExecGrade() const
{
	return (_exec_grade);
}

// --Member Functions-- //

void Form::beSigned(const Bureaucrat &bureaucrat_obj)
{
	if (bureaucrat_obj.getGrade() > 150)
		throw GradeTooLowException();
	if (bureaucrat_obj.getGrade() <= _sign_grade)
	{
		_is_signed = true;
		std::cout << "Form signed!\n";
	}
	else
		std::cout << "Form not signed, grade not high enough.\n";
}

