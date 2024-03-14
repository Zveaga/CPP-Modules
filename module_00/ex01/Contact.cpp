/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 12:23:47 by coxer         #+#    #+#                 */
/*   Updated: 2024/03/14 12:17:42 by raanghel      ########   odam.nl         */
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

std::string Contact::get_first_name(bool truncate) const
{	
	if (truncate == true && first_name.length() > 10)
		return (first_name.substr(0, 9) + ".");
	else
		return (first_name);
}

std::string Contact::get_last_name(bool truncate) const
{
	if (truncate == true && last_name.length() > 10)
		return (last_name.substr(0, 9) + ".");
	else
		return (last_name);
}

std::string Contact::get_nickname(bool truncate) const
{
	if (truncate == true && nickname.length() > 10)
		return (nickname.substr(0, 9) + ".");
	else
		return (nickname);
}

std::string Contact::get_phone_number(bool truncate) const
{
	if (truncate == true && phone_number.length() > 10)
		return (phone_number.substr(0, 9) + ".");
	else
		return (phone_number);
}

std::string Contact::get_darkest_secret(bool truncate) const
{
	if (truncate == true && darkest_secret.length() > 10)
		return (darkest_secret.substr(0, 9) + ".");
	else
		return (darkest_secret);
}
