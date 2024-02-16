/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 12:12:08 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/16 13:06:35 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include"ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		// --Conststructors-- //
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &object);
		// --Overloads-- //
		FragTrap &operator=(const FragTrap &object);
		// --Destructor-- //
		~FragTrap();	
		// --Member Functions-- //
		void beRepaired(unsigned int amount) override;
		void highFiveGuys(void);
};

#endif
