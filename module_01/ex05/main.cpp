/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/05 15:50:35 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/06 16:06:53 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(void)
{
	Harl harl;
	
	std::cout << "-----------------\n";
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	std::cout << "-----------------\n";
	return (0);
}