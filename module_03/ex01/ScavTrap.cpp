/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/15 17:47:08 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/15 20:14:42 by coxer         ########   odam.nl         */
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

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
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

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints <= 0)
	{
		std::cout << this->name << " has 0 energyPoints left, cannot repair\n";
		return ;
	}
	else if (this->hitPoints <= 0)
	{
		std::cout << this->name << " has 0 hitPoints left, cannot repair\n";
		return ;	
	}
	this->energyPoints--;
	this->hitPoints += amount;
	std::cout << this->name << " repaired itself and got " << amount << " hitPoints back";
	if (this->hitPoints > this->maxHitPoints)
	{
		std::cout << ". Max health was exceeded. ";
		std::cout << "Setting it back to " << this->maxHitPoints << std::endl;;
		this->hitPoints = this->maxHitPoints;
	}
	std::cout << "(hitPoints left: " << this->hitPoints << " | ";
	std::cout << "energyPoints left: " << this->energyPoints << ")" << std::endl;
}
