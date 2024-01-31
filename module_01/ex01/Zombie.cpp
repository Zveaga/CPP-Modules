/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 19:10:03 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/30 18:37:10 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	announce();
}

Zombie::Zombie()
{
	this->name = "Constructor Zombie";
	announce();
}

Zombie::~Zombie()
{
	std::cout << "Destructor called for: " << name << std::endl;
}
