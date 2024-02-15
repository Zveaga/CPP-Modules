/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 12:45:18 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/15 20:16:14 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

int main(void)
{
	std::cout << "---------------------------" << std::endl;
	ClapTrap clap_trap("FIRST");
	
	std::cout << "---------------------------" << std::endl;
	ScavTrap scav_trap("SECOND");
	
	std::cout << "---------------------------" << std::endl;
	// ScavTrap scav_trap2;

	// std::cout << "---------------------------" << std::endl;
	// ScavTrap scav_trap3(scav_trap2);

	// std::cout << "---------------------------" << std::endl;
	// ScavTrap scav_trap4;

	// std::cout << "---------------------------" << std::endl;
	// scav_trap4 = scav_trap2;
	// std::cout << "---------------------------" << std::endl;
		
	std::cout << "---------------------------" << std::endl;	
	// --Attack-- //
	scav_trap.attack(clap_trap.getName());
	clap_trap.takeDamage(scav_trap.getAttackDamage());
	clap_trap.beRepaired(10);
	clap_trap.attack(scav_trap.getName());
	std::cout << "---------------------------" << std::endl;
	
	// --Take damage-- //
	scav_trap.takeDamage(50);
	scav_trap.takeDamage(10);
	std::cout << "---------------------------" << std::endl;
	
	// --Repair-- //
	scav_trap.beRepaired(10);
	scav_trap.beRepaired(60);
	std::cout << "---------------------------" << std::endl;
	
	// --Die-- //
	scav_trap.takeDamage(150);
	std::cout << "---------------------------" << std::endl;
	
	// --Cannot attack or repair-- //
	scav_trap.beRepaired(10);
	scav_trap.attack(clap_trap.getName());
	std::cout << "---------------------------" << std::endl;
	scav_trap.guardGate();
	std::cout << "---------------------------" << std::endl;

	return (0);
}
