#include"Serializer.hpp"

// --Conststructors-- //
Serializer::Serializer() {}

Serializer::Serializer(const Serializer& obj)
{
	*this = obj;
}

// --Destructor-- //
Serializer::~Serializer() {}

// --Overloads-- //
Serializer& Serializer::operator=(const Serializer& obj)
{
	(void)obj;
	return (*this);
}

// --Member Functions-- //
uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
