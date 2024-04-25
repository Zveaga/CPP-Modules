/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/02 16:42:20 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/08 11:05:41 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// --Conststructors-- //

AForm::AForm(): _name("DEFAULT"), _is_signed(false), _sign_grade(0), _exec_grade(0)
{
	std::cout << _name << " form costructed by basic constructor (base class)\n";
}


AForm::AForm(const AForm &object): _name(object._name), _sign_grade(object._sign_grade), _exec_grade(object._exec_grade)
{
	std::cout << _name << " form constructed by copy constructor (base class)\n";

}

AForm::AForm(std::string name, bool is_signed, int sign_grade, int exec_grade):
	_name(name), _is_signed(is_signed), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	std::cout << _name << " form constructed by custom constructor (base class)\n";
}

// --Destructor-- //

AForm::~AForm()
{
	std::cout << _name << " form destructed (base class)\n";
}

// --Overloads-- //

AForm &AForm::operator=(const AForm &object)
{
	// no need to copy const values!!
	return (*this);
}


std::ostream &operator<<(std::ostream &os, const AForm &object)
{
	os << object.getName() << " form info:\n-form signed: " << object.getIsSigned()
		<< "\n-grade required to sign form: " << object.getSignGrade()
		<< "\n-grade requred to execute form: " << object.getExecGrade()
		<< std::endl; 
	return (os);
}

// --Getters-- //
std::string AForm::getName() const
{
	return (_name);
}

bool AForm::getIsSigned() const
{
	return (_is_signed);
}

int AForm::getSignGrade() const
{
	return (_sign_grade);
}

int AForm::getExecGrade() const
{
	return (_exec_grade);
}

// --Setters-- //

// void AForm::setName(std::string name)
// {
// 	_name = name;
// }

// void AForm::setIsSigned()
// {

// }

// void AForm::setSignGrade()
// {

// }

// void AForm::setExecGrade()
// {

// }


// --Member Functions-- //

void AForm::beSigned(const Bureaucrat &bureaucrat_obj)
{
	if (bureaucrat_obj.getGrade() > 150)
		throw GradeTooLowException();
	if (bureaucrat_obj.getGrade() <= _sign_grade)
	{
		_is_signed = true;
		std::cout << getName() << " signed!\n";
	}
	else
		std::cout << getName() << " not signed: grade not high enough!\n";
}

void AForm::execute(const Bureaucrat &executor) const
{
	if (!_is_signed)
		throw std::runtime_error(_name + " did't sign form!");
	if (executor.getGrade() > _exec_grade)
		throw GradeTooLowException();
	executeAction();
}

//void AForm:executeAction() const {}


// --Exceptions-- //

const char *AForm::GradeTooHighException::what() const throw()
{
	return (" grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}
