/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 18:55:11 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/30 17:13:21 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int	main(void)
{
	Zombie new_zombie("Zombie 0");

	Zombie *new_zombie_1 = new_zombie.newZombie("Zombie 1");
	Zombie *new_zombie_2 = new_zombie.newZombie("Zombie 2");
	Zombie *new_zombie_3 = new_zombie.newZombie("Zombie 3");
	
	new_zombie.randomChump("Random Chump 1");
	new_zombie.randomChump("Random Chump 2");
	new_zombie.randomChump("Random Chump 3");
	
	
	delete(new_zombie_1);
	delete(new_zombie_2);
	delete(new_zombie_3);
}
