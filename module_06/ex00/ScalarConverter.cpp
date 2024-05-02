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

// --Non-Members-- //

enum class LiteralType
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	IMPOSSIBLE,
	NON_DISPLAYABLE,
};

bool isInt(const std::string &value)
{

}

bool isChar(const std::string &value)
{
	if (value.length() == 1 && !std::isdigit(value[0]))
	{
		return (true);
	}
	return (false);
}

LiteralType detectType(const std::string &value)
{
	if (isChar(value))
	{
		if ((value[0] >= 0 && value[0] <= 31) || value[0] == 127)
			return (LiteralType::NON_DISPLAYABLE);
		return (LiteralType::CHAR);
	}
	try
	{

	}
}

// --Member Functions-- //

void ScalarConverter::convert(const std::string value)
{
	std::cout << "Original type: " << typeid(value).name() << "\n";
	// char	asChar;
	// int		asInt;
	// float	asFloat;
	// double	asDouble;

	// std::cout
	// 		<< "char: " << asChar << "\n"
	// 		<< "int: " << asInt << "\n"
	// 		<< "float : " << asFloat << "\n"
	// 		<< "double: " << asDouble << "\n";
}
