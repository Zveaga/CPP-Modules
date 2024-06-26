/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:42 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/16 14:47:20 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

// --Conststructors-- //
Cat::Cat()
{
	this->type = "Cat";
	this->brain = new(std::nothrow) Brain();
	if (this->brain == nullptr)
	{
		std::cout << "Memory allocation failure:\n";
		exit(EXIT_FAILURE);
	}
	std::cout << this->type << " constructed (basic constructor)\n";
}
Cat::Cat(const Cat &object)
{
	this->type = object.type;
	if (object.brain)
		{
			this->brain = new Brain();
			*(this->brain) = *(object.brain);
		}
	std::cout << this->type << " constructed (copy constructor)\n";
}

// --Destructor-- //
Cat::~Cat()
{
	delete this->brain;
	std::cout << this->type << " destructed\n";
}

// --Overloads-- //
Cat &Cat::operator=(const Cat &object)
{
	if (this != &object)
	{
		this->type = object.type;
		if (object.brain)
		{
			delete this->brain;
			this->brain = new Brain();
			*(this->brain) = *(object.brain);
		}		
		std::cout << this->type << " constructed (copy assignment operator)\n";
	}
	return(*this);
}

// --Member Functions-- //
void Cat::makeSound() const
{
	std::cout << "Miawww!\n";
}

void Cat::fillBrainIdeas() const
{
	this->brain->fillIdeas();
}

void Cat::outputBrainIdeas() const
{
	this->brain->outputIdeas();
}

Brain *Cat::getBrain() const
{
	return (brain);
}

