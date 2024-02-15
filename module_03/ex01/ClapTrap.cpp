/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/14 18:13:11 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/15 20:13:28 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
		
// --Constructors-- //	
ClapTrap::ClapTrap()
{
	this->name = "Default ClapTrap";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "Default ClapTrap constructor called -> '" << this->name << "' was constructed\n";
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "Name ClapTrap constructor called -> '" << this->name << "' was constructed\n";
}

ClapTrap::ClapTrap(const ClapTrap &object)
{
	this->name = object.name;
	this->hitPoints = object.hitPoints;
	this->energyPoints = object.energyPoints;
	this->attackDamage = object.attackDamage;
	std::cout << "ClapTrap copy constructor called -> '" << this->name << "' was constructed\n";
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
		std::cout << "ClapTrap copy assignment called -> '" << this->name << "' was constructed\n";
	}
	return (*this);
}

// --Destructor-- //	
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called -> '" <<  this->name << "' was destructed\n";
}

// --Member Functions-- //

std::string ClapTrap::getName()
{
	return(this->name);
}

int ClapTrap::getHitPoints()
{
	return(this->hitPoints);
}

int ClapTrap::getEnergyPoints()
{
	return(this->energyPoints);
}

int ClapTrap::getAttackDamage()
{
	return(this->attackDamage);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints <= 0)
	{
		std::cout << this->name << " has 0 energyPoints left, cannot attack\n";
		return ;
	}
	else if (this->hitPoints <= 0)
	{
		std::cout << this->name << " has 0 hitPoints left, cannot attack\n";
		return ;	
	}
	this->energyPoints--;
	std::cout << this->name << " attacks " << target <<
			" causing " << this->attackDamage << " points of damage ";
	std::cout << "(hitPoints left: " << this->hitPoints << " | ";
	std::cout << "energyPoints left: " << this->energyPoints << ")" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	std::cout << this->name << " took damage of " << amount << " hitPoints";
	if (this->hitPoints <= 0)
	{
		this->hitPoints = 0;
		std::cout << ". " << this->name << " died ";
	}
	std::cout << "(hitPoints left: " << this->hitPoints << " | ";
	std::cout << "energyPoints left: " << this->energyPoints << ")" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
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
