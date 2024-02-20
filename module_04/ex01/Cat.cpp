/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:42 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/20 17:16:00 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

// --Conststructors-- //
Cat::Cat()
{
	this->type = "CAT";
	try
	{
		this->brain = new Brain();
		//throw std::bad_alloc();
	}
	catch (const std::bad_alloc &e)
	{
		std::cout << "Memory allocation failure: " << e.what() << std::endl;
		return ;
	}
	std::cout << this->type << " constructed\n";
}
Cat::Cat(const Cat &object)
{
	this->type = object.type;
	std::cout << this->type << " constructed\n";
}

// --Destructor-- //
Cat::~Cat()
{
	std::cout << this->type << " destructed\n";
}

// --Overloads-- //
Cat &Cat::operator=(const Cat &object)
{
	if (this != &object)
	{
		this->type = object.type;	
		std::cout << this->type << " constructed\n";
	}
	return(*this);
}

// --Member Functions-- //
void Cat::makeSound() const
{
	std::cout << "Miawww!\n";
}
