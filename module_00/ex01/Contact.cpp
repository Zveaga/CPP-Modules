/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 12:23:47 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/24 20:03:10 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"
#include"Contact.hpp"

void Contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
}

void Contact::get_first_name(void)
{
	std::cout << "Your name is: " + first_name << std::endl;
}
