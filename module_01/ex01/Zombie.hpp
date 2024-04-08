/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 18:58:01 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/05 11:53:45 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		Zombie(const std::string name);
		void announce(void);
		Zombie *zombieHorde(int N, const std::string name);
		void setName(const std::string name);
		~Zombie();
};

#endif