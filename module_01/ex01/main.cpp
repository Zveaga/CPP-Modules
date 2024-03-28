/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/30 18:29:46 by coxer         #+#    #+#                 */
/*   Updated: 2024/03/28 13:09:53 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie;
	int	N = 10;

	Zombie *zombie_horde = zombie.zombieHorde(N, "Horde");

	delete []zombie_horde;
}
