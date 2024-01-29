/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/29 18:58:01 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/29 19:09:31 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <string>
// #include <iomanip>
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		void announce(void);
		
};

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
