#include"RobotomyRequestForm.hpp"

// --Conststructors-- //
RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout <<  getName() << " form constructed by basic constructor\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: AForm("ROBOTOMY", false, 72, 45), _target(target)
{
	std::cout <<  getName() << " form constructed by custom constructor\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &object)
{
	_target = object._target;
	std::cout <<  getName() << " form constructed by copy constructor\n";
}

// --Destructor-- //
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout <<  getName() << " form destructed\n";
}


// --Overloads-- //
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &object)
{
	if (this != &object)
	{
		_target = object._target;
	}
	std::cout <<  getName() << " form constructed by copy assignment operator\n";
	return (*this);
}

// --Setters-- //


// --Getters-- //


// --Member Functions-- //

void RobotomyRequestForm::makeNoise() const
{
	std::cout << "*Drilling noise...*\n";
	std::cout <<  _target << "has been robotomized successfully 50%\\ of the time.\n";
	//!!! Otherwise, informs that the robotomy failed.!!!
	
}

void RobotomyRequestForm::executeAction() const
{
	makeNoise();
}
