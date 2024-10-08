/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: raanghel <raanghel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/09 15:41:06 by raanghel      #+#    #+#                 */
/*   Updated: 2024/09/09 15:41:07 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// --Conststructors-- //
ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << getName() << " form constructed by basic constructor\n";
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &object)
{
	*this = object;
	std::cout << getName() << " form constructed by copy constructor\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: AForm("SHRUBBERY", false, 145, 137), _target(target) 
{
	std::cout << getName() << " form constructed by custom constructor\n";
}

// --Destructor-- //
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << getName() << " form destructed\n";
}

// --Overloads-- //
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &object)
{
	(void)object;
	std::cout << getName() << " form constructed by copy assignment operator\n";
	return (*this);
}

// --Member Functions-- //
void ShrubberyCreationForm::writeAsciiTrees(std::ofstream &file) const
{
	const std::string tree = " \
	       _-_\n\
	    /~~   ~~\\ \n\
	 /~~         ~~\\ \n\
	{               } \n\
	 \\  _-     -_  / \n\
	      \\\\ //    \n\
	       | | \n\
	       | | \n\
	      // \\\\\n \
	-----------------\n\n";
	
	file << tree + tree + tree + tree + tree;
}

void ShrubberyCreationForm::createFile() const
{
	std::ofstream file;
	file.open(_target + "_shrubbery");
	if (!file)
	{
		std::cerr << "Error while opening file\n";
		exit(EXIT_FAILURE);
	}
	writeAsciiTrees(file);
	file.close();
	std::cout << "Shrubbery has been planted\n";
}

void ShrubberyCreationForm::executeAction() const
{
	createFile();
}

// --Exceptions-- //