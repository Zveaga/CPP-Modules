/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/11/01 18:04:35 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"

/*
	std::vector && std::list
*/

int main(int argc, char **argv)
{	
	(void) argv;
	std::cout << "\n============START============\n\n";
	if (argc < 2) {
		std::cerr << "ERROR: Program must be ran with 1 argument!\n";
		std::exit(EXIT_FAILURE);
	}
	
	

	std::cout << "\n-----------------------------\n\n";
	std::cout << "\n=============END=============\n";
	return (0);
}
