/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:43 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/20 09:56:06 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const Animal *meta = new Animal();
	std::cout << "--------------------------\n";
	const Animal *i = new Dog();
	std::cout << "--------------------------\n";
	const Animal *j = new Cat();
	std::cout << "--------------------------\n";
	
	std::cout << i->getType();
	i->makeSound();
	std::cout << j->getType();
	j->makeSound();
	meta->makeSound();
	std::cout << "--------------------------\n";
	
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	
	delete meta;
	delete i;
	delete j;
	std::cout << "--------------------------\n";
	return (0);
}
