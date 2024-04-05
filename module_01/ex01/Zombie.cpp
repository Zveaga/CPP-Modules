/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 19:10:03 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/05 11:53:52 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"	

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(const std::string name)
{
	this->name = name;
}

Zombie::Zombie()
{
	this->name = "BASIC";
	std::cout << "Basic constructor called\n";	
}

Zombie::~Zombie()
{
	std::cout << "Destructor called for: " << name << std::endl;
}

void Zombie::setName(const std::string name)
{
	this->name = name;
}
