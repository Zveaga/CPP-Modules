/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: raanghel <raanghel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/09 15:43:40 by raanghel      #+#    #+#                 */
/*   Updated: 2024/09/09 15:43:41 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "AForm.hpp"
#include <iostream>

class  PresidentialPardonForm: public AForm
{
	private:
		std::string _target;
		void		outputMessage() const;
	public:
		// --Conststructors-- //
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &object);
		// --Destructor-- //
		~PresidentialPardonForm();
		// --Overloads-- //
		PresidentialPardonForm &operator=(const PresidentialPardonForm &object);

		void executeAction() const;
};


#endif