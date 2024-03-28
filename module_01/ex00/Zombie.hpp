/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 18:58:01 by coxer         #+#    #+#                 */
/*   Updated: 2024/03/28 13:04:59 by raanghel      ########   odam.nl         */
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
		Zombie *newZombie(std::string name);
		~Zombie();

		//Zombie(std::string name) : name(name) {};
		
};

#endif