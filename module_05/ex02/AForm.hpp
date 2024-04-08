#ifndef A_FORM_HPP
# define A_FORM_HPP

#include "Bureaucrat.hpp"
//#include "ShrubberyCreationForm.hpp"
//#include "RobotomyRequestForm.hpp"
//#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_is_signed;
		const int			_sign_grade;
		const int			_exec_grade;

	public:
		// --Conststructors-- //
		AForm();
		AForm(const AForm &object);
		AForm(std::string name, bool is_signed, int sign_grade, int exec_grade);
		// --Destructor-- //
		virtual ~AForm();
		// --Overloads-- //
		AForm &operator=(const AForm &object);
		// --Getters-- //
		std::string 	getName() const;
		bool 			getIsSigned() const;
		int 			getSignGrade() const;
		int 			getExecGrade() const;
		// --Setters-- //
		// void			setName(const std::string name);
		// void			setIsSigned(bool is_signed);
		// void			setSignGrade();
		// void			setExecGrade();

		// --Member Functions-- //
		void 			beSigned(const Bureaucrat &bureaucrat_obj);
		void			execute(const Bureaucrat &executor) const;
		virtual void	executeAction() const = 0; // makes the class abstract
		// --Exceptions-- //
		class GradeTooHighException : public std::exception
		{
			public: 
				const char *what() const noexcept
				{
					return ("grade too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public: 
				const char *what() const noexcept
				{
					return ("grade too low");
				}
		};

};

std::ostream &operator<<(std::ostream &os, const AForm &object);

#endif
