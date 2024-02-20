/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 16:39:07 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/20 17:15:54 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include"Animal.hpp"
#include"Brain.hpp"

class Cat: public Animal
{
	private:
		const Brain *brain;
		
	public:
		// --Conststructors-- //
		Cat();
		Cat(const Cat &object);
		// --Destructor-- //
		~Cat();
		// --Overloads-- //
		Cat &operator=(const Cat &object);
		// --Member Functions-- //
		void makeSound() const;
};

#endif
