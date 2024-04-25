/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:43 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/25 13:07:51 by rares         ########   odam.nl         */
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
	// try
	// {
	// 	Bureaucrat bureaucrat("Manager", 2000);		
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << "Error constructing the object: " << e.what() << std::endl;		
	// }
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
	
	std::cout << "\n------------beSigned----------\n\n";
	shrubbery.beSigned(bureaucrat);
	robotomy.beSigned(bureaucrat);
	pardon.beSigned(bureaucrat);
	
	std::cout << "\n--------------executeForm------------\n";
	try
	{
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



	// std::cout << "\n------------execute----------\n\n";
	// try
	// {
	// 	shrubbery.execute(bureaucrat);
	// 	std::cout << "\n-------------------------\n\n";	
	// 	robotomy.execute(bureaucrat);
	// 	std::cout << "\n-------------------------\n\n";
	// 	pardon.execute(bureaucrat);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << "Error executing the form action: " << e.what() << std::endl;	
	// }
	
	std::cout << "\n======================END======================\n";	
	return (0);
}
