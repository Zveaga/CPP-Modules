/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 12:23:26 by coxer         #+#    #+#                 */
/*   Updated: 2024/03/14 12:29:30 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	oldest_contact = 0;
}

void PhoneBook::add_first_name(int i)
{
	std::string	field;
	
	std::cout << "Enter first name: ";
	std::getline(std::cin, field);
	if (field.empty())
		add_first_name(i);
	else
		contacts[i].set_first_name(field);
}

void PhoneBook::add_last_name(int i)
{
	std::string	field;
	
	std::cout << "Enter last name: ";
	std::getline(std::cin, field);
	if (field.empty())
		add_last_name(i);
	else
		contacts[i].set_last_name(field);
}

void PhoneBook::add_nickname(int i)
{
	std::string	field;
	
	std::cout << "Enter nickname: ";
	std::getline(std::cin, field);
	if (field.empty())
		add_nickname(i);
	else
		contacts[i].set_nickname(field);
}

void PhoneBook::add_phone_number(int i)
{
	std::string	field;
	
	std::cout << "Enter phone number: ";
	std::getline(std::cin, field);
	if (field.empty())
		add_phone_number(i);
	else
		contacts[i].set_phone_number(field);
}

void PhoneBook::add_darkest_secret(int i)
{
	std::string	field;
	
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, field);
	if (field.empty())
		add_darkest_secret(i);
	else
		contacts[i].set_darkest_secret(field);
}

void PhoneBook::add_contact(int i)
{	
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	add_first_name(i);
	add_last_name(i);
	add_nickname(i);
	add_phone_number(i);
	add_darkest_secret(i);	
}



void PhoneBook::display_contact(int count)
{
	int	index = 0;
	while (true)
	{	
		if (count == 1)
			std::cout << "\nEnter 0 to display the full contact\n-> ";
		else
		{
			std::cout << "Enter between index 0 and " << count - 1
				<<" to display the full contact\n-> ";	
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
		std::cout << std::setw(10) << std::right << contacts[i].get_nickname(true)  << "|" <<  std::endl;
	}
	display_contact(count);
}

std::string PhoneBook::getOption(void) const
{
	std::string option;
	
	while (true)
	{
		std::cout << "\nEnter option (add/search/exit): ";
		std::cin >> option;
		if (option != "add" && option != "search" && option != "exit")
		{
			std::cout << "Option is not valid.\n";
			continue ;
		}
		break ;
	}
	return (option);
}

void PhoneBook::welcomeMessage(void) const
{
	std::cout << "\nWelcome to my basic phonebook entry program!\n";
	std::cout << "\nYou can choose between these 3 options:\
	\n- add-> save a new contact\
	\n- search-> display a specific contact\
	\n- exit-> exit program\n";
}
