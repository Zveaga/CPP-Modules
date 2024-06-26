/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/20 12:09:58 by rares         #+#    #+#                 */
/*   Updated: 2024/04/16 13:08:49 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

// --Conststructors-- //
WrongAnimal::WrongAnimal()
{
	this->type = "Wrong Basic Animal";
	std::cout << this->type << " constructed\n";
}
WrongAnimal::WrongAnimal(const WrongAnimal &object)
{
	this->type = object.type;
	std::cout << this->type << " constructed\n";
}

// --Destructor-- //
WrongAnimal::~WrongAnimal()
{
	std::cout << this->type << " destructed\n";
}

// --Overloads-- //
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &object)
{
	if (this != &object)
	{
		this->type = object.type;	
		std::cout << this->type << " constructed\n";
	}
	return(*this);
}

// --Member Functions-- //

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout <<  "WRONG BASIC ANIMAL makes a sound!\n";
}
