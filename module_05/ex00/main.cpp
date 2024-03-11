/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:43 by coxer         #+#    #+#                 */
/*   Updated: 2024/03/11 14:56:52 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main(void)
{
	std::cout << "\n============CONSTRUCTION=============\n";
	std::cout << "\n------------VALID GRADE------------\n\n";
	
	Bureaucrat bureaucrat("CLERK", 10);
	
	std::cout << "\n------------GRADE TOO LOW--------\n\n";
	
	try
	{
		Bureaucrat manager("MANAGER", 1000);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error constructing the bureaucrat: " << e.what() << std::endl;
	}
	
	std::cout << "\n----------GRADE TOO HIGH----------\n\n";
	
	try
	{
		Bureaucrat director("DIRECTOR", -5);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error constructing the bureaucrat: " << e.what() << std::endl;	
	} 

	std::cout << "\n============INCREMENT=============\n";
	
	bureaucrat.setGrade(2);
	try
	{
		bureaucrat.incrementGrade();
		bureaucrat.incrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error while incrementing : " << e.what() << std::endl;	
	}
	
	std::cout << "\n============DECREMENT=============\n";
	bureaucrat.setGrade(148);
	try
	{
		bureaucrat.decrementGrade();
		bureaucrat.decrementGrade();
		bureaucrat.decrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error while decrementing : " << e.what() << std::endl;	
	}
	
	
	std::cout << "\n=======OPERATOR << OVERLOAD=======\n";
	
	bureaucrat.setGrade(10);
	std::cout << bureaucrat;

	// std::cout << bureaucrat.getName() << " bureaucrat grade: " << bureaucrat.getGrade() << std::endl;

	// std::cout << "\n===========INCREMENT GRADE============\n\n";
	// bureaucrat.incrementGrade();
	// bureaucrat.incrementGrade();
	
	// std::cout << bureaucrat.getName() << " bureaucrat grade: " << bureaucrat.getGrade() << std::endl;

	// std::cout << "\n===========DECREMENT GRADE============\n\n";
	// bureaucrat.decrementGrade();
	// std::cout << bureaucrat.getName() << " bureaucrat grade: " << bureaucrat.getGrade() << std::endl;

	//-----------------------------------------//
	
	std::cout << "\n======================END======================\n";
	//std::cout << "\n--------------------------\n";
	return (0);
}
