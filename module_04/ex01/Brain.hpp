/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/20 16:40:46 by rares         #+#    #+#                 */
/*   Updated: 2024/04/15 16:31:53 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include<iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
	// --Conststructors-- //
	Brain();
	Brain(const Brain &object);
	// --Destructor-- //
	~Brain();
	// --Overloads-- //
	Brain &operator=(const Brain &object);
	// --Member Functions-- //
	void outputIdeas() const;
	void fillIdeas();
};

#endif
