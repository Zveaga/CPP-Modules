/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 15:21:27 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/31 18:29:07 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include<iostream>
#include<string>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		const std::string &getType() const;
		void setType(const std::string type);
		
			
};

#endif