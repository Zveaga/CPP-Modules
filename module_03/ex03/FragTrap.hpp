/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 12:12:08 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/19 11:39:35 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include"ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
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
		void highFiveGuys(void);
};

#endif
