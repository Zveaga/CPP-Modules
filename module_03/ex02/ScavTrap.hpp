/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/15 17:47:13 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/16 13:06:43 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include"ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
	// --Conststructors-- //
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &object);
	// --Destructor-- //
		~ScavTrap();
	// --Overloads-- //
		ScavTrap &operator=(const ScavTrap &object);
	// --Member Functions-- //
		void beRepaired(unsigned int amount) override;
		void guardGate();
};

#endif
