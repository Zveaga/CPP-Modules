/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: raanghel <raanghel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/09 15:43:36 by raanghel      #+#    #+#                 */
/*   Updated: 2024/09/09 15:43:37 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"

// --Conststructors-- //
PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout <<  getName() << " form constructed by basic constructor\n";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: AForm("PARDON", false, 25, 5), _target(target)
{
	std::cout <<  getName() << " form constructed by custom constructor\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &object)
{
	_target = object._target;
	std::cout <<  getName() << " form constructed by copy constructor\n";

}

// --Destructor-- //
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout <<  getName() << " form destructed\n";
}


// --Overloads-- //
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &object)
{
	if (this != &object)
	{
		_target = object._target;
	}
	std::cout <<  getName() << " form constructed by copy assignment operator\n";
	return (*this);
}

// --Setters-- //


// --Getters-- //


// --Member Functions-- //

void PresidentialPardonForm::outputMessage() const
{
	std::cout <<  _target << " has been been pardoned by Zaphod Beeblebrox\n";	
}

void PresidentialPardonForm::executeAction() const
{
	outputMessage();
}
