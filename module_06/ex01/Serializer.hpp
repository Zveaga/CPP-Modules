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
	public:
		// --Destructor-- //
		~Serializer();
		// --Overloads-- //
		Serializer& operator=(const Serializer& obj);
		// --Member Functions-- //
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};


#endif
