/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:35:43 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/16 15:07:08 by raanghel      ########   odam.nl         */
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
	// std::cout << "\n---------DOG1---------\n\n";
	// dog1.fillBrainIdeas();
	// dog1.outputBrainIdeas();
	// std::cout << "\n---------DOG2---------\n\n";
	// dog2.fillBrainIdeas();
	// dog2.outputBrainIdeas();
	
	//--------------------------DEEP COPY TEST-----------------------//
	// std::cout << "-----------DOG1------------\n";
	// const Dog dog1;
	// std::cout << "\n---------DOG2---------\n\n";
	// const Dog dog2 = dog1;
	// std::cout << "\n---------DOG3---------\n\n";
	// const Dog dog3(dog2);

	// std::cout << "-----------Brain addresses------------\n";
	// std::cout << "Dog 1 brain's address: " << dog1.getBrain() << "\n";
	// std::cout << "Dog 2 brain's address: " << dog2.getBrain() << "\n";
	// std::cout << "Dog 3 brain's address: " << dog3.getBrain() << "\n";
	

	//--------------------------ARRAY TEST-----------------------//
	
	// int size = 10;
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

	//std::cout << "\n======================END======================\n";
	std::cout << "\n--------------------------\n";
	return (0);
}
