/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 15:14:01 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/14 20:26:19 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

void HumanB::setWeapon(Weapon &weapon)
{
	if (this->weapon->getType() == "imaginary weapon")
		delete this->weapon;
	this->weapon = &weapon;
}

HumanB::HumanB(const std::string &name) : name(name)
{
	weapon = new Weapon("imaginary weapon");
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
