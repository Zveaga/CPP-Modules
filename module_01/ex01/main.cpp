/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/30 18:29:46 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/30 18:47:29 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie;

	Zombie *zombie_horde = zombie.zombieHorde(10, "Horde");
	
	// for (int i = 0; i < 10; i++)
	// 	delete(zombie_horde[i]);
}