/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/20 16:40:43 by rares         #+#    #+#                 */
/*   Updated: 2024/02/23 09:52:21 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "--BLANK IDEA--";
	std::cout << "BRAIN constructed (basic constructor)\n";
}
Brain::Brain(const Brain &object)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = object.ideas[i];
	std::cout <<"BRAIN constructed (copy constructor)\n";
}

// --Destructor-- //
Brain::~Brain()
{
	std::cout << "BRAIN destructed\n";
}

// --Overloads-- //
Brain &Brain::operator=(const Brain &object)
{
	if (this != &object)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = object.ideas[i];
		std::cout << "BRAIN constructed (copy assignment operator)\n";
	}
	return(*this);
}

// --Member Functions-- //

void Brain::outputIdeas() const
{
	for (int i = 0; i < 10; i++)
		std::cout << ideas[i] << std::endl; 
}

void Brain::fillIdeas()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "IDEA: " + std::to_string(i);	
}

