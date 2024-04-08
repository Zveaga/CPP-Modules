/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 15:14:00 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/05 12:03:12 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : name(name), weapon(weapon) {} 

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
