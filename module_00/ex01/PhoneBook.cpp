/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 12:23:26 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/29 13:16:06 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	oldest_contact = 0;
}

void PhoneBook::add_contact(int i)
{
	std::string	field;
	
	std::cout << "\nEnter first name: ";
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

	std::cout << "Enter your darkest secret: ";
	std::cin >> field;
	contacts[i].set_darkest_secret(field);
}

void PhoneBook::display_contact(int count)
{
	int	index = 0;
	while (true)
	{	
		if (count == 1)
			std::cout << "\nEnter 0 to display the full contact\n";
		else
		{
			std::cout << "Enter between index 0 and " << count - 1
				<<" to display the full contact\n";	
		}
		std::cin >> index;
		if (std::cin.fail() || index < 0 || index > count - 1)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Index out of range\n";
			index = 0;
			continue ;
		}
		break ;
	}
	std::cout << "\nFirst Name: ";
	std::cout << contacts[index].get_first_name(false) << std::endl;
	std::cout << "Last Name: ";
	std::cout << contacts[index].get_last_name(false) << std::endl;
	std::cout << "Nickname: ";
	std::cout << contacts[index].get_nickname(false) << std::endl;
	std::cout << "Phone Number: ";
	std::cout << contacts[index].get_phone_number(false) << std::endl;
	std::cout << "Darkest Secret: ";
	std::cout << contacts[index].get_darkest_secret(false) << std::endl << std::endl;
}

void PhoneBook::display_contact_list(int count)
{
	if (count == 0)
	{
		std::cout << "\nThere are no contacts to display!\n";
		return ;	
	}
	for (int i = 0; i < count; i++)
	{
		std::cout << std::setw(10) << std::right << i << "|";
		std::cout << std::setw(10) << std::right << contacts[i].get_first_name(true) << "|";
		std::cout << std::setw(10) << std::right << contacts[i].get_last_name(true) << "|";
		std::cout << std::setw(10) << std::right << contacts[i].get_nickname(true) << std::endl;
	}
	display_contact(count);
}
