/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 12:23:47 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/27 12:56:41 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"
#include"Contact.hpp"

void Contact::set_first_name(std::string _first_name)
{
	first_name = _first_name;
}

void Contact::set_last_name(std::string _last_name)
{
	last_name = _last_name;
}

void Contact::set_nickname(std::string _nickname)
{
	nickname = _nickname;
}
void Contact::set_phone_number(std::string _phone_number)
{
	phone_number = _phone_number;
}
void Contact::set_darkest_secret(std::string _darkest_secret)
{
	darkest_secret = _darkest_secret;
}

std::string Contact::get_first_name(void)
{
	return (first_name);
}

std::string Contact::get_last_name(void)
{
	return (last_name);
}

std::string Contact::get_nickname(void)
{
	return (nickname);
}

std::string Contact::get_phone_number(void)
{
	return (phone_number);
}

std::string Contact::get_darkest_secret(void)
{
	return (darkest_secret);
}

