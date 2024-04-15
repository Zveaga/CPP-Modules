/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 12:12:12 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/15 16:39:34 by raanghel      ########   odam.nl         */
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

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	// this->name = name;
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
	std::cout << "ScavTrap destructor called -> '" <<  this->name << "' was destructed\n";
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "High Five guys!\n";
}
