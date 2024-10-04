/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:43 by coxer         #+#    #+#                 */
/*   Updated: 2024/09/09 15:05:38 by raanghel      ########   odam.nl         */
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
	Bureaucrat bureaucrat("Manager", 5);
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
	try
	{
		std::cout << "\n------------beSigned()----------\n\n";
		shrubbery.beSigned(bureaucrat);
		robotomy.beSigned(bureaucrat);
		pardon.beSigned(bureaucrat);
		std::cout << "\n--------------executeForm()------------\n";
		std::cout << "\n------------Shrubbery----------\n\n";
		bureaucrat.executeForm(shrubbery);
		std::cout << "\n------------Robotomy----------\n\n";
		bureaucrat.executeForm(robotomy);
		std::cout << "\n------------Pardon----------\n\n";
		bureaucrat.executeForm(pardon);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
	
	std::cout << "\n======================END======================\n";	
	return (0);
}
