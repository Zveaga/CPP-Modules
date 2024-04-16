/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/20 12:09:51 by rares         #+#    #+#                 */
/*   Updated: 2024/04/16 13:08:59 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

// --Conststructors-- //
WrongCat::WrongCat()
{
	this->type = "Wrong Cat";
	std::cout << this->type << " constructed\n";
}
WrongCat::WrongCat(const WrongCat &object)
{
	this->type = object.type;
	std::cout << this->type << " constructed\n";
}

// --Destructor-- //
WrongCat::~WrongCat()
{
	std::cout << this->type << " destructed\n";
}

// --Overloads-- //
WrongCat &WrongCat::operator=(const WrongCat &object)
{
	if (this != &object)
	{
		this->type = object.type;	
		std::cout << this->type << " constructed\n";
	}
	return(*this);
}

// --Member Functions-- //
void WrongCat::makeSound() const
{
	std::cout << "Miaw!\n";
}
