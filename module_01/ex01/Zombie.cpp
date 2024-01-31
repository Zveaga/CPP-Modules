/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 19:10:03 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/31 14:36:33 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


// Zombie &Zombie::operator=(const Zombie &zombie)
// {
// 	if (this != &zombie)
// 		name = zombie.name;
// 	return (*this);
// }	

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
