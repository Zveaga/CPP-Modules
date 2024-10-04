/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: raanghel <raanghel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/09 15:42:24 by raanghel      #+#    #+#                 */
/*   Updated: 2024/09/09 15:42:25 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_is_signed;
		const int			_sign_grade;
		const int			_exec_grade;

	public:
		// --Conststructors-- //
		Form();
		Form(const Form &object);
		Form(std::string name, bool is_signed, int sign_grade, int exec_grade);
		// --Destructor-- //
		~Form();
		// --Overloads-- //
		Form &operator=(const Form &object);
		// --Getters-- //
		const std::string &getName() const;
		bool 		getIsSigned() const;
		int 		getSignGrade() const;
		int 		getExecGrade() const;
		// --Setters-- //
		// --Member Functions-- //
		void 		beSigned(const Bureaucrat &object);
		// --Exceptions-- //
		class GradeTooHighException : public std::exception
		{
			public: 
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public: 
				const char *what() const throw();
		};

};

std::ostream &operator<<(std::ostream &os, const Form &object);

#endif
