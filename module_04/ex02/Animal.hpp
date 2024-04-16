/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:39:02 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/16 15:23:43 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include<iostream>

class Animal
{
	protected:
		std::string type;
	public:
		// --Conststructors-- //
		Animal();
		Animal(const Animal &object);
		// --Destructor-- //
		virtual ~Animal() = 0;  //--> makes the class abstract
		// --Overloads-- //
		Animal &operator=(const Animal &object);
		// --Member Functions-- //
		std::string getType() const;
		void set_type(std::string type);
		virtual void makeSound() const = 0;
};

#endif
