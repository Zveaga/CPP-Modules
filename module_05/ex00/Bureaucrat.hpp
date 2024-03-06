/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/06 17:37:13 by coxer         #+#    #+#                 */
/*   Updated: 2024/03/06 19:30:59 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include<iostream>
#include<exception>

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
		
	public:
		// --Conststructors-- //
		Bureaucrat();
		Bureaucrat(const Bureaucrat &object);		
		// --Destructor-- //
		~Bureaucrat();
		// --Overloads-- //
		Bureaucrat &operator=(const Bureaucrat &object);	
		// --Member Functions-- //
		void getName();
		void getGrade();
		void incrementGrade();
		void decrementGrade();
};



std::ostream &operator<<(std::ostream &os, const Bureaucrat &object);



#endif


