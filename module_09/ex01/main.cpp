/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/10/27 16:19:29 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"RPN.hpp"

//---REVERSE POLISH NOTATION---//
/*
	3 - 4 + 5   -->   3 4 - 5 +	
	(3 + 4) * (5 + 6)  -->  3 4 + 5 6 + * 
*/

int main(int argc, char **argv)
{	
	(void) argv;
	std::cout << "\n============START============\n\n";
	if (argc != 2) {
		std::cerr << "ERROR: Program must be ran with 1 argument!\n";
		std::exit(EXIT_FAILURE);
	}
	
	RPN rpn;
	rpn.calculate(argv[1]);

	std::cout << "\n-----------------------------\n\n";
	std::cout << "\n=============END=============\n";
	return (0);
}
