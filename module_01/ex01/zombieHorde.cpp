/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/30 17:52:07 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/05 11:57:11 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *Zombie::zombieHorde(int N, std::string name)
{
	Zombie *horde = new(std::nothrow) Zombie[N];
	if (!horde)
	{
		std::cout << "Memory allocation failure.\n";
		return (nullptr);
	}
	std::cout << std::endl;
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
		horde[i].announce();
	}
	std::cout << std::endl;
	return (horde);
}
