/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/20 12:10:00 by rares         #+#    #+#                 */
/*   Updated: 2024/02/20 14:18:19 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include<iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		// --Conststructors-- //
		WrongAnimal();
		WrongAnimal(const WrongAnimal &object);
		// --Destructor-- //
		~WrongAnimal();
		// --Overloads-- //
		WrongAnimal &operator=(const WrongAnimal &object);
		// --Member Functions-- //
		std::string getType() const;
		void makeSound() const;
};

#endif