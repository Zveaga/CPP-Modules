/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 12:45:18 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/19 11:45:15 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"
#include"DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond_trap1;
	std::cout << "---------------------------" << std::endl;
	//DiamondTrap diamond_trap2("diamond2");

	std::cout << "---------------------------" << std::endl;
	std::cout << "Name: " << diamond_trap1.getName() << std::endl;
	std::cout << "HitPoints: " << diamond_trap1.getHitPoints() << std::endl;
	std::cout << "EnergyPoints: " << diamond_trap1.getEnergyPoints() << std::endl;
	std::cout << "AttackDamage: " << diamond_trap1.getAttackDamage() << std::endl;
	std::cout << "---------------------------" << std::endl;	
	
	// //--Attack-- //
	// diamond_trap1.attack(diamond_trap2.getName());
	// diamond_trap2.takeDamage(diamond_trap1.getAttackDamage());
	// std::cout << "---------------------------" << std::endl;
	
	// // --Take damage-- //
	diamond_trap1.takeDamage(50);
	// diamond_trap2.takeDamage(10);
	std::cout << "---------------------------" << std::endl;
	
	// // --Repair-- //
	// diamond_trap2.beRepaired(10);
	// diamond_trap2.beRepaired(90);
	// std::cout << "---------------------------" << std::endl;
	
	// // --Die-- //
	// diamond_trap2.takeDamage(150);
	// std::cout << "---------------------------" << std::endl;
	
	// // --Cannot attack or repair-- //
	// diamond_trap2.beRepaired(10);
	// diamond_trap2.attack(diamond_trap1.getName());
	// std::cout << "---------------------------" << std::endl;
	// diamond_trap2.whoAmI();
	// std::cout << "---------------------------" << std::endl;

	return (0);
}
