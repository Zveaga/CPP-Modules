/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 19:10:20 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/30 16:57:35 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::randomChump(std::string name)
{
	Zombie *randomChump = new(std::nothrow) Zombie(name);
	if (!randomChump)
	{
		std::cout << "Memory allocation failure.\n";
		return ;
	}
}
