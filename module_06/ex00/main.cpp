/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/05/02 15:02:49 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error! Program accepts 1 parameter only!\n";
		std::exit(EXIT_FAILURE);
	}
	// int a = 1;
	// float b = 1.0;
	// double c = 2.0;
	
	ScalarConverter::convert(argv[1]);
	return (0);
}