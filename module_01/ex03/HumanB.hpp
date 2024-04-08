/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 15:21:30 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/05 12:02:58 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include"Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(const std::string &name);
		void setWeapon(Weapon &weapon);
		void attack();
};

#endif