/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 19:10:30 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/30 18:35:01 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *Zombie::newZombie(std::string name)
{
	Zombie *newZombie = new(std::nothrow) Zombie(name);
	if (!newZombie)
	{
		std::cout << "Memory allocation failure.\n";
		return (NULL);
	}
	announce();
	return (newZombie);

}
