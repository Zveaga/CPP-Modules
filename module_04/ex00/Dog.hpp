/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:39:08 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/20 12:28:05 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include"Animal.hpp"

class Dog: public Animal
{
	public:
		// --Conststructors-- //
		Dog();
		Dog(const Dog &object);
		// --Destructor-- //
		~Dog();
		// --Overloads-- //
		Dog &operator=(const Dog &object);
		// --Member Functions-- //
		void makeSound() const;
};

#endif
