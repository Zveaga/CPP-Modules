/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:43 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/23 11:01:32 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	//------------------------INTRA TEST--------------------------//
	
	std::cout << "\n============CONSTRUCTION=============\n";

	std::cout << "\n---------DOGS---------\n\n";
	const Animal *dog = new Dog();
	std::cout << "\n---------CATS---------\n\n";
	const Animal *cat = new Cat();
	
	std::cout << "\n============DESTRUCTION=============\n\n";
	
	delete dog;
	std::cout << "--------------------------\n";
	delete cat;
	
	//----------------------BRAIN IDEAS TESTS---------------------//
	
	// std::cout << "\n============CONSTRUCTION=============\n\n";
	
	// const Dog dog1;
	// std::cout << "--------------------------\n";
	// const Dog dog2(dog1);   //--> should create a deep copy
	// std::cout << "--------------------------\n";
	
	// std::cout << "\n============BRAIN IDEAS=============\n\n";
	// dog1.fillBrainIdeas();
	// std::cout << "\n---------DOG1---------\n\n";
	// dog1.outputBrainIdeas();
	// std::cout << "\n---------DOG2---------\n\n";
	// dog2.outputBrainIdeas();
	
	//--------------------------ARRAY TEST-----------------------//
	
	// int size = 4;
	// std::cout << "\n============CONSTRUCTION=============\n";
	
	// Animal *animals[size];
	// std::cout << "\n---------DOGS---------\n\n";

	// for (int i = 0; i < size / 2; i++)
	// {
	// 	animals[i] = new Dog();
	// 	std::cout << "--------------------------\n";

	// }
	// std::cout << "\n---------CATS---------\n\n";
	
	// for (int i = size / 2; i < size; i++)
	// {
	// 	animals[i] = new Cat();
	// 	std::cout << "--------------------------\n";
	// }
	
	// std::cout << "\n============MAKE SOUND=============\n\n";
	
	// for (int i = 0; i < size; i++)
	// 	animals[i]->makeSound();
	
	// std::cout << "\n============DESTRUCTION=============\n\n";
	
	// for (int i = 0; i < size; i++)
	// {
	// 	delete animals[i];
	// 	std::cout << "--------------------------\n";
	// }
	

	//----------------------PREVIOUS TESTS------------------------//
	
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
	
	//std::cout << "\n======================END======================\n";
	std::cout << "\n--------------------------\n";
	return (0);
}
