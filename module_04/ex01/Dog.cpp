/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:43 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/23 11:01:16 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

// --Conststructors-- //
Dog::Dog()
{
	this->type = "DOG";
	this->brain = new(std::nothrow) Brain();
	if (this->brain == nullptr)
	{
		std::cout << "Memory allocation failure:\n";
		return ;
	}
	// try 
	// {
	// 	this->brain = new Brain();
	// }
	// catch (const std::bad_alloc &e)
	// {
	// 	std::cout << "Memory allocation failure: " << e.what() << std::endl;
	// 	return ; 
	// }
	std::cout << this->type << " constructed (basic constructor)\n";
}

//-Deep Copy-//
Dog::Dog(const Dog &object)
{
	this->type = object.type;
	if (object.brain)
	{
		this->brain = new Brain();
		*(this->brain) = *(object.brain);
	}
	std::cout << this->type << " constructed (copy constructor)\n";
}

//-Shallow Copy-//

// Dog::Dog(const Dog &object)
// {
// 	this->type = object.type;
// 	if (object.brain)
// 		this->brain = object.brain;  //--> both point to the same memory
// 	std::cout << this->type << " constructed (shallow copy constructor)\n";
// }

// --Destructor-- //
Dog::~Dog()
{
	delete this->brain;
	std::cout << this->type << " destructed\n";
}

// --Overloads-- //
Dog &Dog::operator=(const Dog &object)
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
void Dog::makeSound() const
{
	std::cout << "Woofwooof!\n";
}

void Dog::fillBrainIdeas() const
{
	this->brain->fillIdeas();
}

void Dog::outputBrainIdeas() const
{
	this->brain->outputIdeas();
}

