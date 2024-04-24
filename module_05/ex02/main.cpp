/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:43 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/24 10:53:26 by rares         ########   odam.nl         */
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
	Bureaucrat bureaucrat("Manager", 2);
	std::cout << "\n-------------------------\n\n";	
	ShrubberyCreationForm shrubbery("Home");
	std::cout << shrubbery;
	std::cout << "\n-------------------------\n\n";	
	RobotomyRequestForm robotomy("Office");
	std::cout << robotomy;
	std::cout << "\n-------------------------\n\n";	
	PresidentialPardonForm pardon("White House");
	std::cout << pardon;

	std::cout << "\n========FUNCTION TESTS========\n";
	
	std::cout << "\n------------execute----------\n\n";
	
	shrubbery.execute(bureaucrat);
	std::cout << "\n-------------------------\n\n";	
	robotomy.execute(bureaucrat);
	std::cout << "\n-------------------------\n\n";	
	pardon.execute(bureaucrat);

	std::cout << "\n------------executeForm----------\n\n";
	
	std::cout << "\n======================END======================\n";
	// std::cout << "\n------------Bureaucrat----------\n\n";
	// std::cout << "\n------------AForm basic----------\n\n";
	// std::cout << "\n------------AForm custom----------\n\n";
	
	return (0);
}
