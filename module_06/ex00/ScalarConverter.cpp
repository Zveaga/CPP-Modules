#include"ScalarConverter.hpp"

// --Conststructors-- //
ScalarConverter::ScalarConverter()
{
	std::cout << " CONVERTER costructed by basic constructor (base class)\n";
}


ScalarConverter::ScalarConverter(const ScalarConverter &object)
{
	*this = object;
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
	(void)object;
	return (*this);
}

// --Member Functions-- //
void ScalarConverter::convert(const std::string value)
{
	if (isChar(value))
	{
		std::cout << "CHAR\n\n";
		convertChar(value);
	}
	else if (isInt(value))
	{
		std::cout <<  "INT\n\n";
		convertInt(value);
	}
	else if (isFloat(value))
	{
		std::cout <<  "FLOAT\n\n";
		convertFloat(value);
	}
	else if (isDouble(value))
	{
		std::cout <<  "DOUBLE\n\n";
		convertDouble(value);
	}
	else
	{
		std::cout <<  "TYPE NOT RECOGNIZED\n";
	}
}


// if (i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min())
// 	std::cout << "int: impossible\n";