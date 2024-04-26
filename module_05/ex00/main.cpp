/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:43 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/25 13:23:07 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main(void)
{
	std::cout << "\n============CONSTRUCTION=============\n";
	
	std::cout << "\n------------VALID GRADE----------\n\n";
	
	Bureaucrat bureaucrat("CLERK", 10);
	
	std::cout << "\n-----------GRADE TOO LOW---------\n\n";
	
	try
	{
		Bureaucrat manager("MANAGER", 150);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error constructing the bureaucrat: " << e.what() << std::endl;
	}
	
	std::cout << "\n-----------GRADE TOO HIGH----------\n\n";
	
	try
	{
		Bureaucrat director("DIRECTOR", 1);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error constructing the bureaucrat: " << e.what() << std::endl;	
	} 

	std::cout << "\n============INCREMENT=============\n\n";
	
	bureaucrat.setGrade(2);
	std::cout << bureaucrat;
	
	try
	{
		bureaucrat.incrementGrade();
		bureaucrat.incrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error while incrementing : " << e.what() << std::endl;	
	}
	std::cout << bureaucrat;
	std::cout << "\n============DECREMENT=============\n\n";
	
	bureaucrat.setGrade(148);
	std::cout << bureaucrat;
	
	try
	{
		bureaucrat.decrementGrade();
		bureaucrat.decrementGrade();
		
		bureaucrat.decrementGrade();
		bureaucrat.decrementGrade();

	}
	catch (const std::exception &e)
	{
		std::cerr << "Error while decrementing : " << e.what() << std::endl;	
	}
	
	std::cout << bureaucrat;
	
	std::cout << "\n=======OPERATOR << OVERLOAD=======\n";
	
	bureaucrat.setGrade(10);
	std::cout << bureaucrat;
	
	std::cout << "\n======================END======================\n";
	return (0);
}
