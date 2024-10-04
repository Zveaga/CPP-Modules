/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: raanghel <raanghel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/09 15:40:46 by raanghel      #+#    #+#                 */
/*   Updated: 2024/09/09 15:40:47 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include <iostream>

class Intern
{
	public:
		// --Conststructors-- //
		Intern();
		Intern(const Intern &object);
		// --Destructor-- //
		~Intern();
		// --Overloads-- //
		Intern &operator=(const Intern &object);
		// --Member Functions-- //
		AForm *makeForm(const std::string form_name, const std::string form_target);

};


#endif