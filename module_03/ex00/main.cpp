/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 12:45:18 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/15 15:38:59 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main(void)
{
	ClapTrap clap_trap("ClapTrap");
	ClapTrap target_obj("Target");
	
	std::cout << "---------------------------" << std::endl;	
	// --Attack-- //
	clap_trap.attack(target_obj.getName());
	target_obj.takeDamage(clap_trap.getAttackDamage());
	std::cout << "---------------------------" << std::endl;
	
	// --Take damage-- //
	clap_trap.takeDamage(5);
	clap_trap.takeDamage(1);
	std::cout << "---------------------------" << std::endl;
	
	// --Repair-- //
	clap_trap.beRepaired(3);
	clap_trap.beRepaired(10);
	// clap_trap.beRepaired(1);
	// clap_trap.beRepaired(1);
	// clap_trap.beRepaired(1);
	// clap_trap.beRepaired(1);
	// clap_trap.beRepaired(1);
	// clap_trap.beRepaired(1);
	// clap_trap.beRepaired(1);
	std::cout << "---------------------------" << std::endl;
	
	// --Die-- //
	clap_trap.takeDamage(15);
	std::cout << "---------------------------" << std::endl;
	
	// --Cannot attack or repair-- //
	clap_trap.beRepaired(10);
	clap_trap.attack(target_obj.getName());
	std::cout << "---------------------------" << std::endl;
	return (0);
}
