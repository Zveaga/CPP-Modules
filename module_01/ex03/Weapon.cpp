/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 15:14:05 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/31 17:23:42 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}

const std::string &Weapon::getType() const
{
	return (type);
}

void Weapon::setType(const std::string type)
{
	this->type = type;
}

