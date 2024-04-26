/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:43 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/26 19:07:10 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"Intern.hpp"

class AForm;

int main(void)
{
	std::cout << "\n============CONSTRUCTION=============\n";
	
	Intern intern;
	std::cout << "-------------------------\n";
	
	AForm *p_form1;
	AForm *p_form2;
	AForm *p_form3;
	
	p_form1 = intern.makeForm("shrubbery creation", "garden");
	std::cout << "-------------------------\n";
	p_form2 = intern.makeForm("robotomy request", "factory");
	std::cout << "-------------------------\n";
	p_form3 = intern.makeForm("presidential pardon", "oval office");
	
	std::cout << "\n============DESTRUCTION=============\n";
	delete p_form1;
	std::cout << "-------------------------\n";
	delete p_form2;
	std::cout << "-------------------------\n";	
	delete p_form3;
	std::cout << "\n======================END======================\n";	
	return (0);
}
