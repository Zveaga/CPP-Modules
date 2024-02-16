/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 12:45:18 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/16 15:03:30 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"

int main(void)
{
	std::cout << "---------------------------" << std::endl;
	ClapTrap clap_trap("FIRST");
	
	std::cout << "---------------------------" << std::endl;
	ScavTrap scav_trap("SECOND");
	
	std::cout << "---------------------------" << std::endl;
	FragTrap frag_trap("THIRD");
	
	// std::cout << "---------------------------" << std::endl;
	// FragTrap frag_trap2;

	// std::cout << "---------------------------" << std::endl;
	// FragTrap frag_trap3(frag_trap2);

	// std::cout << "---------------------------" << std::endl;
	// FragTrap frag_trap4;

	// std::cout << "---------------------------" << std::endl;
	// frag_trap4 = frag_trap2;
	// std::cout << "---------------------------" << std::endl;
		
	std::cout << "---------------------------" << std::endl;	
	// --Attack-- //
	scav_trap.attack(clap_trap.getName());
	clap_trap.takeDamage(scav_trap.getAttackDamage());
	frag_trap.attack(scav_trap.getName());
	scav_trap.takeDamage(frag_trap.getAttackDamage());
	scav_trap.attack(frag_trap.getName());
	std::cout << "---------------------------" << std::endl;
	
	// --Take damage-- //
	frag_trap.takeDamage(50);
	frag_trap.takeDamage(10);
	std::cout << "---------------------------" << std::endl;
	
	// --Repair-- //
	frag_trap.beRepaired(10);
	frag_trap.beRepaired(90);
	std::cout << "---------------------------" << std::endl;
	
	// --Die-- //
	frag_trap.takeDamage(150);
	std::cout << "---------------------------" << std::endl;
	
	// --Cannot attack or repair-- //
	frag_trap.beRepaired(10);
	frag_trap.attack(clap_trap.getName());
	std::cout << "---------------------------" << std::endl;
	frag_trap.highFiveGuys();
	std::cout << "---------------------------" << std::endl;

	return (0);
}
