/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 19:10:30 by coxer         #+#    #+#                 */
/*   Updated: 2024/03/28 13:04:55 by raanghel      ########   odam.nl         */
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
	return (newZombie);

}
