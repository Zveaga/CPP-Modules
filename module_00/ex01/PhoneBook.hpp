/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 12:23:33 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/29 18:34:56 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <array>
#include <iomanip>
#include <string>
#include <limits>

class PhoneBook
{	
	private:
		int	oldest_contact;
		std::array<Contact, 8> contacts;
		
	public:
		PhoneBook();
		void add_contact(int i);
		void update_contacts(int i);
		void display_contact_list(int count);
		void display_contact(int count);
};

#endif