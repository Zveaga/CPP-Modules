/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:43 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/20 17:32:25 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "\n============CONSTRUCTION=============\n\n";
	
	Animal *animals = new Animal[10];

	for (int i = 0; i < 5; i++)
	{
		animals[i] = Dog();
	}
	std::cout << "--------------------------\n";
	
	for (int i = 5; i < 10; i++)
	{
		animals[i] = Cat();
	}
	std::cout << "--------------------------\n";

	for (int i = 0; i < 3; i++)
		animals[i].makeSound();
	std::cout << "--------------------------\n";

	
	
	
	// std::cout << "\n============CONSTRUCTION=============\n\n";
	
	// const Animal *animal = new Animal();
	// std::cout << "--------------------------\n";
	// const Animal *dog = new Dog();
	// std::cout << "--------------------------\n";
	// const Animal *cat = new Cat();
	
	// std::cout << "\n============MAKE SOUND=============\n\n";
	
	// std::cout << "TYPE: " << dog->getType() << std::endl;
	// dog->makeSound();
	// std::cout << std::endl;
	// std::cout << "TYPE: " << cat->getType() << std::endl;
	// cat->makeSound();
	// std::cout << std::endl;
	// animal->makeSound();
	
	// std::cout << "\n============TEST ARRAY=============\n\n";
	
	// const Animal *animals[] = 
	// {
	// 	animal,
	// 	dog,
	// 	cat,
	// };
	// for (int i = 0; i < 3; i++)
	// 	animals[i]->makeSound();
	
	// std::cout << "\n============DESTRUCTION=============\n\n";
	
	// delete animal;
	// delete dog;
	// delete cat;
	
	// std::cout << "\n========WRONG ANIMAL & WRONG CAT=========\n\n";
	
	// std::cout << "============CONSTRUCTION=============\n\n";
	
	// const WrongAnimal *wrong_animal = new WrongAnimal();
	// std::cout << "--------------------------\n";
	// const WrongAnimal *wrong_cat = new WrongCat();
	
	// std::cout << "\n============MAKE SOUND=============\n\n";

	// std::cout << "Type: " << wrong_cat->getType() << std::endl;
	// wrong_cat->makeSound();
	// std::cout << std::endl;
	
	// std::cout << "Type:  " << wrong_animal->getType() << std::endl;
	// wrong_animal->makeSound();
	
	// std::cout << "\n============DESTRUCTION=============\n\n";
	
	// delete wrong_animal;
	// delete wrong_cat;
	
	std::cout << "\n======================END======================\n";
	return (0);
}
