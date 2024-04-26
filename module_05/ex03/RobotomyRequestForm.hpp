#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
		std::string _target;
		void makeNoise() const;
	public:
		// --Conststructors-- //
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &object);
		// --Destructor-- //
		~RobotomyRequestForm();
		// --Overloads-- //
		RobotomyRequestForm &operator=(const RobotomyRequestForm &object);
		// --Member functions-- //
		void executeAction() const;
};


#endif