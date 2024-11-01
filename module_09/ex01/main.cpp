/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/11/01 17:41:06 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"RPN.hpp"

int main(int argc, char **argv)
{	
	std::cout << "\n============START============\n\n";
	if (argc != 2) {
		std::cerr << "ERROR: Program must be ran with 1 argument!\n";
		std::exit(EXIT_FAILURE);
	}
	std::string expr = argv[1];
	RPN rpn;
	if (!rpn.validateInput(expr)) {
		std::cout << "\n=============END=============\n";
        std::exit(EXIT_FAILURE);
	}
	std::string cleanedExpr = rpn.removeSpaces(expr);
	if (!rpn.calculate(cleanedExpr)) {
		std::cout << "\n=============END=============\n";
        std::exit(EXIT_FAILURE);
	}
	std::cout << "\n=============END=============\n";
	return (0);
}
