/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:40 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/16 15:24:06 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Brain.hpp"

// --Conststructors-- //
Animal::Animal()
{
	this->type = "BASIC ANIMAL";
	std::cout << this->type << " constructed (basic constructor)\n";
}
Animal::Animal(const Animal &object)
{
	this->type = object.type;
	std::cout << this->type << " constructed (copy constructor)\n";
}

// --Destructor-- //
// Animal::~Animal() {}

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
		std::cout << this->type << " constructed (copy assignment operator)\n";
	}
	return(*this);
}

// --Member Functions-- //

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::set_type(std::string type)
{
	this->type = type;
}

// void Animal::makeSound() const
// {
// 	std::cout << "AAAAAAAAAA!\n";
// }