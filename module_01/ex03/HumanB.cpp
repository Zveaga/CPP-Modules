/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 15:14:01 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/05 12:05:38 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

void HumanB::setWeapon(Weapon &weapon)
{
	// if (this->weapon->getType() == "basic weapon")
	// 	delete this->weapon;
	this->weapon = &weapon;
}

HumanB::HumanB(const std::string &name) : name(name)
{
	//weapon = new Weapon("basic weapon");
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
