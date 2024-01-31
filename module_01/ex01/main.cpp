/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/30 18:29:46 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/31 14:42:40 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int	N = 10;
	Zombie zombie;

	Zombie *zombie_horde = zombie.zombieHorde(N, "Horde");

	delete []zombie_horde;
}