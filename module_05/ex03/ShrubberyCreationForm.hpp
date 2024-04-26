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