/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 12:23:33 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/24 18:24:08 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include"Contact.hpp"
#include<array>

class PhoneBook
{	
	public: std::array<Contact, 8> contacts;

};


#endif