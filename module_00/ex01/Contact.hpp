/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 12:23:37 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/05 13:25:22 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include<iostream>

class Contact
{
	private:
		std::string	first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		std::string get_first_name(bool truncate);
		std::string get_last_name(bool truncate);
		std::string get_nickname(bool truncate);
		std::string get_phone_number(bool truncate);
		std::string get_darkest_secret(bool truncate);		
		void 		set_first_name(std::string first_name);
		void 		set_last_name(std::string _last_name);
		void 		set_nickname(std::string _nickname);
		void 		set_phone_number(std::string _phone_number);
		void 		set_darkest_secret(std::string _darkest_secret);
};

#endif