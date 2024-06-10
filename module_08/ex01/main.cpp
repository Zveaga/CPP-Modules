/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/06/10 20:03:18 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"


int main(void)
{	
	std::cout << "\n========START========\n\n";
	
	Span span(1000000);
	try
	{	
		// span.addNumber(6);
		// span.addNumber(3);
		// span.addNumber(17);
		// span.addNumber(9);
		// span.addNumber(11);
		// span.addNumber(11);
		
		span.addNumbers(10);
		std::cout << "All numbers added\n";
	}
	catch (const std::range_error &e)
	{
		std::cout << "\nCaught exception: " << e.what() << "\n";
		std::exit(EXIT_FAILURE);
	};

	std::cout << "\n--------------------------\n";

	std::cout << "Short span: " << span.shortestSpan() << "\n";	
	std::cout << "Long span:  " << span.longestSpan();

	std::cout << "\n========END========\n";
	return (0);
}
