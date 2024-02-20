/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/20 12:09:56 by rares         #+#    #+#                 */
/*   Updated: 2024/02/20 12:31:31 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include"WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		// --Conststructors-- //
		WrongCat();
		WrongCat(const WrongCat &object);
		// --Destructor-- //
		~WrongCat();
		// --Overloads-- //
		WrongCat &operator=(const WrongCat &object);
		// --Member Functions-- //
		void makeSound() const;
};

#endif
