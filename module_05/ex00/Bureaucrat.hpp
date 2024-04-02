/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/06 17:37:13 by coxer         #+#    #+#                 */
/*   Updated: 2024/04/02 16:28:36 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include<iostream>
#include<exception>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
		
	public:
		class GradeTooHighException: public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("grade too high");
				}
		};
		
		class GradeTooLowException: public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("grade too low");
				}
		};
		// --Conststructors-- //
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &object);		
		// --Destructor-- //
		~Bureaucrat();
		// --Overloads-- //
		Bureaucrat &operator=(const Bureaucrat &object);	
		// --Member Functions-- //
		const std::string 	getName() const;
		const int 			getGrade() const;
		const void 			setGrade(int grade);
		void 				incrementGrade();
		void 				decrementGrade();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &object);

#endif
