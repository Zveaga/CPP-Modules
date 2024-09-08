/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/09/08 15:22:00 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

int main(void)
{	
	std::cout << "\n============START============\n\n";
	BitcoinExchange btc;
	btc.parseDatabse();
	std::cout << "\n-----------------------------\n\n";
	btc.parseInputAndPerformExchange();
	std::cout << "\n=============END=============\n";
	return (0);
}
