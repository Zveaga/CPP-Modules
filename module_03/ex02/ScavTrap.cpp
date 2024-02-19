/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/15 17:47:08 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/19 11:25:36 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"


// --Conststructors-- //
ScavTrap::ScavTrap()
{
	this->name = "Default ScavTrap";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "Default ScavTrap constructor called -> '" << this->name << "' was constructed\n";
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "Name ScavTrap constructor called -> '" << this->name << "' was constructed\n";
}

ScavTrap::ScavTrap(const ScavTrap &object)
{
	this->name = object.name;
	this->hitPoints = object.hitPoints;
	this->energyPoints = object.energyPoints;
	this->attackDamage = object.attackDamage;
	std::cout << "ScavTrap copy constructor called -> '" << this->name << "' was constructed\n";
}

// --Overloads-- //
ScavTrap &ScavTrap::operator=(const ScavTrap &object)
{
	if (this != &object)
	{
		this->name = object.name;
		this->hitPoints = object.hitPoints;
		this->energyPoints = object.energyPoints;
		this->attackDamage = object.attackDamage;
		std::cout << "ScavTrap copy assignment called -> '" << this->name << "' was constructed\n";
	}
	return(*this);
}

// --Destructor-- //
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called -> '" <<  this->name << "' was destructed\n";
}

// --Member Functions-- //
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate Keeper mode\n";
}
