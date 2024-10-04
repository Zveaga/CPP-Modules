/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: raanghel <raanghel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/09 15:40:42 by raanghel      #+#    #+#                 */
/*   Updated: 2024/09/09 15:40:43 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"
#include"AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// --Conststructors-- //
Intern::Intern()
{
	std::cout << "INTERN constructed by basic constructor\n";
}

Intern::Intern(const Intern &object)
{
	*this = object;
	std::cout << "INTERN constructed by copy constructor\n";
}

// --Destructor-- //
Intern::~Intern()
{
	std::cout << "INTERN destructed\n";
}

// --Overloads-- //
Intern &Intern::operator=(const Intern &object)
{
	(void)object;
	std::cout << "INTERN constructed by copy assignment operator\n";
	return (*this);
}

// --Functions to be called through a pointer-- //
static AForm *shrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm *robotomy(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm *pardon(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

// --pForm is a type alias to a func that returns a pointer to an AForm obj-- //
using pForm = AForm* (*)(std::string);

// --Member Functions-- //
AForm *Intern::makeForm(const std::string name, const std::string target)
{
	AForm *p_form;

	std::string names[] =
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon",
	};
	pForm p_forms[] = 
	{
		&shrubbery,
		&robotomy,
		&pardon,
	};
	for (int i = 0; i < 3; ++i)
	{
		if (names[i] == name)
		{
			p_form = p_forms[i](target);
			std::cout << "\nINTERN creates " << name << " form! Target: " << target <<  "\n";
			return (p_form);
		}
	}
	std::cout << "\nINTERN failed to create " << name << " form! Target: " << target <<  "\n";
	return (nullptr);
}
