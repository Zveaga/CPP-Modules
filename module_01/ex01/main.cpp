/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/30 18:29:46 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/05 11:52:48 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie;
	int	N = 10;

	Zombie *zombie_horde = zombie.zombieHorde(N, "Horde");
	if (!zombie_horde)
	{
		std::cout << "\nExiting program...\n";
		exit(EXIT_FAILURE);
	}
	delete []zombie_horde;
}
