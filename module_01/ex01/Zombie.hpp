/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 18:58:01 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/31 14:45:43 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iomanip>
#include <iostream>

#define N 10

class Zombie
{
	private:
		std::string name;
	public:
		// Zombie &operator=(const Zombie &zombie);
		Zombie();
		Zombie(const std::string name);
		void announce(void);
		Zombie *zombieHorde(int N, const std::string name);
		void setName(const std::string name);
		~Zombie();
};

#endif