/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:39:08 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/23 09:57:48 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include"Animal.hpp"
#include"Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *brain;
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
		void fillBrainIdeas() const;
		void outputBrainIdeas() const;
};

#endif
