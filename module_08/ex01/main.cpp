/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/06/10 16:15:58 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"


int main(void)
{	
	std::cout << "\n========START========\n\n";
	
	Span span(5);
	try
	{	
		span.addNumber(1);
		span.addNumber(2);
		span.addNumber(3);
		span.addNumber(4);
		span.addNumber(5);
		span.addNumber(6);
		std::cout << "All numbers added\n";
	}
	catch (const std::out_of_range &e)
	{
		std::cout << "Caught exception: " << e.what() << "\n";
	}
	std::cout << "\n========END========\n";
	return (0);
}
