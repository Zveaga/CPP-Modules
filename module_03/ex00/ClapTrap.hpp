/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/14 18:13:15 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/14 19:09:11 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

class ClapTrap
{
	private:
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
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
