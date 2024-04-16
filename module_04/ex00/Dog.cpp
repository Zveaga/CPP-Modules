/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:43 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/16 12:50:10 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

// --Conststructors-- //
Dog::Dog()
{
	this->type = "Dog";
	std::cout << this->type << " constructed\n";
}

Dog::Dog(const Dog &object)
{
	this->type = object.type;
	std::cout << this->type << " constructed\n";
}

// --Destructor-- //
Dog::~Dog()
{
	std::cout << this->type << " destructed\n";
}

// --Overloads-- //
Dog &Dog::operator=(const Dog &object)
{
	if (this != &object)
	{
		this->type = object.type;	
		std::cout << this->type << " constructed\n";
	}
	return(*this);
}

// --Member Functions-- //
void Dog::makeSound() const
{
	std::cout << "Woofwooof!\n";
}
