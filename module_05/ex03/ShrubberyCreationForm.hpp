/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: raanghel <raanghel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/09 15:41:09 by raanghel      #+#    #+#                 */
/*   Updated: 2024/09/09 15:41:10 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm: public AForm
{
	private:
		std::string _target;
		void writeAsciiTrees(std::ofstream &file) const;
		void createFile() const;
	public:
		// --Conststructors-- //
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &object);
		// --Destructor-- //
		~ShrubberyCreationForm();
		// --Overloads-- //
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &object);
		// --Member functions-- //
		void executeAction() const;
};

#endif