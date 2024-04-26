/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:43 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/26 13:06:35 by rares         ########   odam.nl         */
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
	
	std::cout << "\n------------Form basic----------\n\n";
	
	Form form;
	std::cout << form;
	
	std::cout << "\n------------Form custom----------\n\n";
	
	Form form1("FORM_1", false, 10, 10);
	std::cout << form1;

	// try
	// {
	// 	Form form1("FORM_1", false, 10, 10);
	// 	std::cout << form1;
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cerr << "Error constructing the form object: " << e.what() << std::endl;	
	// }
	
	std::cout << "\n========FUNCTION TESTS========\n";
	std::cout << "\n------------beSigned----------\n\n";
	
	try
	{
		form1.beSigned(bureaucrat);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error signing the form: " << e.what() << std::endl;	
	}
	
	std::cout << "\n------------signForm----------\n\n";
	
	bureaucrat.signForm(form1);

	std::cout << "\n======================END======================\n";
	return (0);
}
