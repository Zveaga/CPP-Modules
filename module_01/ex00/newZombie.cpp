/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 19:10:30 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/05 11:45:24 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *Zombie::newZombie(std::string name)
{
	Zombie *newZombie = new(std::nothrow) Zombie(name);
	if (!newZombie)
	{
		std::cout << "Memory allocation failure.\n";
		return (nullptr);
	}
	return (newZombie);

}
