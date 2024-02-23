/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/30 17:52:07 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/23 16:58:49 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *Zombie::zombieHorde(int N, std::string name)
{
	Zombie *horde = new(std::nothrow) Zombie[N];
	if (!horde)
	{
		std::cout << "Memory allocation failure.\n";
		return (NULL);
	}
	std::cout << std::endl;
	for (int i = 0; i < N; i++)
	{
		//horde[i] = Zombie(name);
		horde[i].setName(name);
		horde[i].announce();
	}
	std::cout << std::endl;
	return (horde);
}

