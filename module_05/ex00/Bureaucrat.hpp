/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/06 17:37:13 by coxer         #+#    #+#                 */
/*   Updated: 2024/09/09 13:54:40 by raanghel      ########   odam.nl         */
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
		int 				getGrade() const;
		void	 			setGrade(int grade);
		void 				incrementGrade();
		void 				decrementGrade();
		// --Exceptions-- //
		class GradeTooHighException: public std::exception
		{
			public:
				const char *what() const throw();
		};
		
		class GradeTooLowException: public std::exception
		{
			public:
				const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &object);

#endif
