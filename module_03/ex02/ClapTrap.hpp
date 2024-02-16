/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/14 18:13:15 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/16 12:51:17 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include<iostream>

class ClapTrap
{
	protected:
		static int maxHitPoints;
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	
	public:
		// --Conststructors-- //
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &object);
		// --Destructor-- //
		~ClapTrap();
		// --Overloads-- //
		ClapTrap &operator=(const ClapTrap &object);
		// --Member Functions-- //
		std::string getName();
		int getHitPoints();
		int getEnergyPoints();
		int getAttackDamage();
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		virtual void beRepaired(unsigned int amount);
};

#endif
