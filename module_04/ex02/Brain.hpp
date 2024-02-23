/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/20 16:40:46 by rares         #+#    #+#                 */
/*   Updated: 2024/02/23 09:52:17 by coxer         ########   odam.nl         */
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
