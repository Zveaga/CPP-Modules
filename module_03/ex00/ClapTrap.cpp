/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/14 18:13:11 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/14 20:28:08 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
		
// --Constructors-- //	
ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called\n";	
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &object)
{
	this->name = object.name;
	this->hitPoints = object.hitPoints;
	this->energyPoints = object.energyPoints;
	this->attackDamage = object.attackDamage;
}

// --Overloads-- //
ClapTrap &ClapTrap::operator=(const ClapTrap &object)
{
	if (this != &object)
	{
		this->name = object.name;
		this->hitPoints = object.hitPoints;
		this->energyPoints = object.energyPoints;
		this->attackDamage = object.attackDamage;
	}	
	return (*this);
}

// --Destructor-- //	
ClapTrap::~ClapTrap()
{
	std::cout << "Default constructor called\n";	
}

// --Member Functions-- //	
void ClapTrap::attack(const std::string &target)
{
	
	std::cout << "ClapTrap " << this->name << " attacks " << target << " causing ";
}
void ClapTrap::takeDamage(unsigned int amount)
{
	
}
void ClapTrap::beRepaired(unsigned int amount)
{
	
}
