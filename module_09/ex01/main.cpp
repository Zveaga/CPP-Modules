/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/10/30 18:15:29 by coxer         ########   odam.nl         */
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
	std::string testExpr = "15  * 2 / 2 * 2 4 - +";
	if (!rpn.validateInput(testExpr)) {
		std::cerr << "Error: Invalid input expression!\n";
        std::exit(EXIT_FAILURE);
	}
	
	std::string cleanedExpr = rpn.removeSpaces(testExpr);
	
	
	rpn.calculate(cleanedExpr);

	// rpn.calculate(std::string(argv[1]));

	std::cout << "\n=============END=============\n";
	return (0);
}
