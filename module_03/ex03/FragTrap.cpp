/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 12:12:12 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/19 11:44:03 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

// --Conststructors-- //
FragTrap::FragTrap()
{
	this->name = "Default FragTrap";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "Default FragTrap constructor called -> '" << this->name << "' was constructed\n";
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "Name FragTrap constructor called -> '" << this->name << "' was constructed\n";
}

FragTrap::FragTrap(const FragTrap &object)
{
	this->name = object.name;
	this->hitPoints = object.hitPoints;
	this->energyPoints = object.energyPoints;
	this->attackDamage = object.attackDamage;
	std::cout << "FragTrap copy constructor called -> '" << this->name << "' was constructed\n";
}


// --Overloads-- //
FragTrap &FragTrap::operator=(const FragTrap &object)
{
	if (this != &object)
	{
		this->name = object.name;
		this->hitPoints = object.hitPoints;
		this->energyPoints = object.energyPoints;
		this->attackDamage = object.attackDamage;
		std::cout << "FragTrap copy assignment called -> '" << this->name << "' was constructed\n";
	}
	return(*this);
}

// --Destructor-- //
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called -> '" <<  this->name << "' was destructed\n";
}

// --Member Functions-- //
// void FragTrap::beRepaired(unsigned int amount)
// {
// 	maxHitPoints = 100;
// 	ClapTrap::beRepaired(amount);
// }

void FragTrap::highFiveGuys(void)
{
	std::cout << "High Five guys!\n";
}
