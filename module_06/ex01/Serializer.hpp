/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/23 18:19:59 by coxer         #+#    #+#                 */
/*   Updated: 2024/09/23 18:20:00 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <cstdint>

struct Data
{
	int intValue;
	char charValue;
	float floatValue;
	std::string stringValue;
};

class Serializer
{
	private:
		// --Conststructors-- //
		Serializer();
		Serializer(const Serializer& obj);
		// --Destructor-- //
		~Serializer();
		// --Overloads-- //
		Serializer& operator=(const Serializer& obj);
	public:
		// --Member Functions-- //
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};


#endif
