/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 15:06:47 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/19 11:29:18 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include"ScavTrap.hpp"
#include"FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string name;
	public:
		// --Conststructors-- //
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &object);
		// --Overloads-- //
		DiamondTrap &operator=(const DiamondTrap &object);
		// --Destructor-- //
		~DiamondTrap();
		// --Member Functions-- //
		//void beRepaired(unsigned int amount) override;
		void attack(const std::string &target);
		void whoAmI();		
};










#endif
