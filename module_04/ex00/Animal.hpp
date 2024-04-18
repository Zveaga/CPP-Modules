/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:39:02 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/18 13:44:00 by raanghel      ########   odam.nl         */
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
		virtual ~Animal();
		// --Overloads-- //
		Animal &operator=(const Animal &object);
		// --Member Functions-- //
		std::string getType() const;
		virtual void makeSound() const;
};

#endif
