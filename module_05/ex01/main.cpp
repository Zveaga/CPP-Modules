/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:43 by coxer         #+#    #+#                 */
/*   Updated: 2024/09/09 14:47:29 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Form.hpp"

class Form;

int main(void)
{
	std::cout << "\n============CONSTRUCTION=============\n";
	std::cout << "\n------------Bureaucrat----------\n\n";

	Bureaucrat bureaucrat("CLERK", 10);
	std::cout << bureaucrat;
	
	std::cout << "\n------------Form----------\n\n";
	Form form1("FORM_1", false, 10, 1);
	std::cout << form1;
	Form form2("FORM_2", false, 5, 1);
	std::cout << form2;
	std::cout << "\n========FUNCTION TESTS========\n";
	std::cout << "\n------------beSigned----------\n\n";
	try
	{
		// Form form3("FORM_3", false, 0, 1);
		form1.beSigned(bureaucrat);
		form2.beSigned(bureaucrat);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;	
	}
	std::cout << "\n------------signForm----------\n\n";
	bureaucrat.signForm(form1);
	bureaucrat.signForm(form2);
	std::cout << "\n======================END======================\n";
	return (0);
}
