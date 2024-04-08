/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:43 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/08 20:54:57 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"ShrubberyCreationForm.hpp"

class AForm;

int main(void)
{
	std::cout << "\n============CONSTRUCTION=============\n";
	
	ShrubberyCreationForm shrubbery_form("Home");
	std::cout << shrubbery_form;
	std::cout << "\n-------------------------\n\n";	
	RobotomyRequestForm robotomy_form("Office");
	std::cout << robotomy_form;
	std::cout << "\n-------------------------\n\n";	
	PresidentialPardonForm pardon_form("White House");
	std::cout << pardon_form;

	
	// std::cout << "\n------------Bureaucrat----------\n\n";	


	// std::cout << "\n------------AForm basic----------\n\n";
	
	
	
	// std::cout << "\n------------AForm custom----------\n\n";
	
	
	
	// std::cout << "\n========FUNCTION TESTS========\n";
	
	// std::cout << "\n------------beSigned----------\n\n";
	
	
	// std::cout << "\n------------signForm----------\n\n";
	
	std::cout << "\n======================END======================\n";
	return (0);
}
