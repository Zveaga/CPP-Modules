/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 18:58:01 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/30 17:27:36 by coxer         ########   odam.nl         */
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
		Zombie(std::string name);
		void announce(void);
		void randomChump(std::string name);
		Zombie* newZombie(std::string name);
		~Zombie();

		//Zombie(std::string name) : name(name) {};
		
};

#endif