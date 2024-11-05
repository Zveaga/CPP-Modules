/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/11/05 16:30:05 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

int main(int argc, char** argv)
{	
	if (argc != 2) {
		std::cerr << "Error: program expects a single argument\n";
		std::exit(1);
	}
	std::cout << "\n============START============\n\n";
	BitcoinExchange btc;
	btc.parseDatabse();
	std::cout << "\n-----------------------------\n\n";
	btc.parseInputAndPerformExchange(std::string(argv[1]));
	std::cout << "\n=============END=============\n";
	return (0);
}
