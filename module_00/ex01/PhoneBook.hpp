/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 12:23:33 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/28 13:44:01 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <array>
#include <iomanip>
#include <string>

class PhoneBook
{	
	private:
		std::array<Contact, 8> contacts;
	public:
		void add_contact(int i);
		void update_contacts(int i);
		void display_contact_list(int count);
		void display_contact(int count);
		


};


#endif