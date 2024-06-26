/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 15:06:45 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/15 17:32:46 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

// --Conststructors-- //
DiamondTrap::DiamondTrap()
{
	name = "Default DiamondTrap";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "Default DiamondTrap constructor called -> '" << this->name << "' was constructed\n";
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name)
{
	this->name = name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "Default DiamondTrap constructor called -> '" << this->name << "' was constructed\n";
}
DiamondTrap::DiamondTrap(const DiamondTrap &object)
{
	this->name = object.name;
	this->hitPoints = object.hitPoints;
	this->energyPoints = object.energyPoints;
	this->attackDamage = object.attackDamage;
	std::cout << "DiamondTrap copy constructor called -> '" << this->name << "' was constructed\n";
}

// --Overloads-- //
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &object)
{
	if (this != &object)
	{
		this->name = object.name;
		this->hitPoints = object.hitPoints;
		this->energyPoints = object.energyPoints;
		this->attackDamage = object.attackDamage;
		std::cout << "DiamondTrap copy assignment called -> '" << this->name << "' was constructed\n";
	}
	return(*this);
}

// --Destructor-- //
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called -> '" <<  this->name << "' was destructed\n";
}

// --Member Functions-- //
void DiamondTrap::whoAmI()
{
	std::cout << "Diamond object name is " << this->name << std::endl;
	std::cout << "ClapTrap object name is " << ClapTrap::name << std::endl;
}		

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
