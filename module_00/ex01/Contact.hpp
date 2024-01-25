/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 12:23:37 by coxer         #+#    #+#                 */
/*   Updated: 2024/01/24 20:21:52 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include<iostream>
// # include<string>

class Contact
{
	private:
		std::string	first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		void set_first_name(std::string first_name);
		void get_first_name(void);
};

#endif