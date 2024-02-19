/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:39:02 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/19 19:04:35 by coxer         ########   odam.nl         */
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
		~Animal();
		// --Overloads-- //
		Animal &operator=(const Animal &object);
		// --Member Functions-- //
		std::string getType() const;
		virtual void makeSound() const;
};

#endif
