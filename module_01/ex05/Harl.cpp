/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/05 15:50:49 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/06 16:05:12 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

void Harl::debug(void)
{
	std::cout << "DEBUG MESSAGE\n";
}

void Harl::info(void)
{
	std::cout << "INFO MESSAGE\n";
}

void Harl::warning(void)
{
	std::cout << "WARNING MESSAGE\n";
}

void Harl::error(void)
{
	std::cout << "ERROR MESSAGE\n";	
}

void Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*pointers[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*pointers[i])();
			return ;
		}
	}
	std::cout << "Complaint level does not match!\n";
}
