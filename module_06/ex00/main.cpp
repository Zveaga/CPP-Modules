/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/09/23 17:47:11 by coxer         ########   odam.nl         */
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
	
	ScalarConverter::convert(argv[1]);
	return (0);
}