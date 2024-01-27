/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 19:25:24 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/27 14:15:42 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Contact.hpp"
#include"PhoneBook.hpp"

static std::string get_option(void)
{
	std::string option;
	
	while(true)
	{
		std::cout << "Enter option (add/search/exit): ";
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



// static void	display_contact(int i)
// {
// 	std::cout << "DISPLAY CONTACT...\n";
// }

static void welcome_message(void)
{
	std::cout << "\nWelcome to my basic phonebook entry program\n";
	std::cout << "\nYou can choose between these 3 options:\
	\n1. add-> save a new contact\
	\n2. search-> display a specific contact\
	\n3. exit-> exit program'\n";
}



int	main(void)
{
	int i = 0;
	int count = 0;
	std::string option;
	PhoneBook phonebook;	
	
	welcome_message();
	while (true)
	{
		option = get_option();
		if (option == "add")
		{
			phonebook.add_contact(i);
			count++;
		}	
		else if (option == "search")
			phonebook.display_contacts(count);
		else if (option == "exit")
			exit(EXIT_SUCCESS);
		if (count == 8)
		{
			std::cout << "max limit reached, replace oldest with new one\n";
			//phonebook.update_contacts();
			//phonebook.contacts[0] = phonebook.contacts[i];
			break ;
		}
		i++;
	}
	
	//std::cout << "First Name:\n";
	

	

	//std::cin >> first_name;
	//phonebook.contacts[0].set_first_name(first_name);
	//phonebook.contacts[0].get_first_name();
	//test.set_first_name("Rares");
	// test.get_first_name();
}