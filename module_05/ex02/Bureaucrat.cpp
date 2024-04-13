/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/08 10:41:15 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/13 18:01:10 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"


// --CUSTOM EXCEPTIONS-- //
//===========GradeTooHighException===========//
//Bureaucrat::GradeTooHighException::GradeTooHighException(const char *message): _message(message){}
// const char *Bureaucrat::GradeTooHighException::what()
// {
// 	return (_message);
// }
//===========GradeTooHighException===========//
//Bureaucrat::GradeTooLowException::GradeTooLowException(const char *message): _message(message){}
// const char *Bureaucrat::GradeTooLowException::what()
// {
// 	return (_message);	
// }

//==========================================================//

// --Conststructors-- //
Bureaucrat::Bureaucrat(): _name("DEFAULT"), _grade(0)
{
	std::cout << _name << " costructed by basic constructor\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
	std::cout << _name << " constructed by custom constructor\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &object): _name(object._name), _grade(object._grade)
{
		std::cout << _name << " constructed by copy constructor\n";

}

// --Destructor-- //
Bureaucrat::~Bureaucrat()
{
	std::cout << _name << " destructed\n";
}

// --Overloads-- //
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &object)
{
	if (this != &object)
	{
		_grade = object._grade;	
	}
	return(*this);
}

// --Member Functions-- //
const std::string Bureaucrat::getName() const
{
	return (_name);
}

const int Bureaucrat::getGrade() const
{
	return(_grade);
}

const void	Bureaucrat::setGrade(int grade)
{
	_grade = grade;	
}

void Bureaucrat::incrementGrade()
{
	_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
	std::cout << "Value incremented\n";
}

void Bureaucrat::decrementGrade()
{
	_grade++;
	if (_grade > 150)
		throw GradeTooLowException();
	std::cout << "Value decremented\n";
}


void Bureaucrat::signForm(const AForm &form_obj)
{
	if (form_obj.getIsSigned() == true)
		std::cout << _name << " signed " << form_obj.getName() << std::endl;
	else
		std::cout << _name << " couldn't sign " << form_obj.getName() << " because grade is not high enough!\n";
}

void Bureaucrat::executeForm(const AForm &form)
{
	try
	{
		form.execute(*this);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Caught exception: " << e.what() << std::endl;	
	}
}


std::ostream &operator<<(std::ostream &os, const Bureaucrat &object)
{
	os << object.getName() << " bureaucrat's grade: " << object.getGrade() << std::endl;
	return (os);
}
