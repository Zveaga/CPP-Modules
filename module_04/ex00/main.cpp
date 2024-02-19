/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:43 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/19 19:16:39 by coxer         ########   odam.nl         */
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
	delete meta;
	delete i;
	delete j;
	std::cout << "--------------------------\n";
	return (0);
}
