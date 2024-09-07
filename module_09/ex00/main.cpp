/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/09/07 12:00:56 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"


//---REVERSE POLISH NOTATION---//
/*
	3 - 4 + 5   -->   3 4 - 5 +	
	(3 + 4) * (5 + 6)  -->  3 4 + 5 6 + * 
*/


int main(void)
{	
	std::cout << "\n============START============\n\n";
	BitcoinExchange btc;
	btc.parseInput();
	btc.parseDatabse();
	// auto it = m


	// std::cout << "\n-----------------------------\n\n";


	
	std::cout << "\n=============END=============\n";
	return (0);
}
