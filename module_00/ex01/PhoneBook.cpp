/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 12:23:26 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/27 14:25:17 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

void PhoneBook::add_contact(int i)
{
	std::string	field;
	
	std::cout << "Enter first name: ";
	std::cin >> field;
	contacts[i].set_first_name(field);
	
	std::cout << "Enter last name: ";
	std::cin >> field;
	contacts[i].set_last_name(field);

	std::cout << "Enter nickname: ";
	std::cin >> field;
	contacts[i].set_nickname(field);

	std::cout << "Enter phone number: ";
	std::cin >> field;
	contacts[i].set_phone_number(field);

	std::cout << "Enter your darkest secret: \n";
	std::cin >> field;
	contacts[i].set_darkest_secret(field);
}

// void PhoneBook::update_contacts(int	i)
// {
	
// }

std::string truncate_string(const std::string &field)
{
	if (field.length() > 10)
		return (field.substr(0, 9) + ".");
	else
		return (field);
}

void PhoneBook::display_contacts(int count)
{
	for (int i = 0; i < count; i++)
	{
		std::cout << std::setw(10) << std::right << i << "|";
		std::cout << std::setw(10) << std::right << contacts[i].get_first_name() + '|';
		std::cout << std::setw(10) << std::right << contacts[i].get_last_name() + '|';
		std::cout << std::setw(10) << std::right << contacts[i].get_nickname() << std::endl;		
	}
	
}