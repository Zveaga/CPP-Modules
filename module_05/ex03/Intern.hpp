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