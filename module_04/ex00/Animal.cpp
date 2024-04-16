/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:40 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/16 12:59:04 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

// --Conststructors-- //
Animal::Animal()
{
	this->type = "Basic Animal";
	std::cout << this->type << " constructed\n";
}
Animal::Animal(const Animal &object)
{
	this->type = object.type;
	std::cout << this->type << " constructed\n";
}

// --Destructor-- //
Animal::~Animal()
{
	std::cout << this->type << " destructed\n";
}

// --Overloads-- //
Animal &Animal::operator=(const Animal &object)
{
	if (this != &object)
	{
		this->type = object.type;	
		std::cout << this->type << " constructed\n";
	}
	return(*this);
}

// --Member Functions-- //

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	// std::cout << "BASIC ANIMAL makes a sound!\n";
}
