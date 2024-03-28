/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 19:25:24 by coxer         #+#    #+#                 */
/*   Updated: 2024/03/28 18:04:06 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Contact.hpp"
#include"PhoneBook.hpp"

int	main(void)
{
	PhoneBook phonebook;
	std::string option;
	int i = 0;
	int	oldest = 0;
	int count = 0;
	
	phonebook.welcomeMessage();
	while (true)
	{
		option = phonebook.getOption();
		if (option == "ADD")
		{
			if (i == 8)
			{
				i = oldest;
				oldest++;
				if (oldest == 7)
				{
					i = 0;
					oldest = 0;
				}
			}
			phonebook.add_contact(i++);
			if (count < 8)
				count++;
		}	
		else if (option == "SEARCH")
			phonebook.display_contact_list(count);
		else if (option == "EXIT")
			exit(EXIT_SUCCESS);
	}
}

