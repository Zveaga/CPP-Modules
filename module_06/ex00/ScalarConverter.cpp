#include"ScalarConverter.hpp"

// --Conststructors-- //

ScalarConverter::ScalarConverter()
{
	std::cout << " CONVERTER costructed by basic constructor (base class)\n";
}


ScalarConverter::ScalarConverter(const ScalarConverter &object)
{
	std::cout << " CONVERTER constructed by copy constructor\n";

}

// --Destructor-- //

ScalarConverter::~ScalarConverter()
{
	std::cout << " CONVERTER destructed\n";
}

// --Overloads-- //

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &object)
{
	return (*this);
}

// --Member Functions-- //

void ScalarConverter::convert(const std::string &literal)
{
	char	asChar = static_cast<char>(literal);
	int		asInt;
	float	asFloat;
	double	asDouble;

	std::cout
			<< "char: " << asChar << "\n"
			<< "int: " << asInt << "\n"
			<< "float : " << asFloat << "\n"
			<< "double: " << asDouble << "\n";
}
