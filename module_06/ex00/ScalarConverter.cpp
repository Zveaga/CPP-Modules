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

bool isChar(const std::string &value)
{
	if (value.length() == 1 && !std::isdigit(value[0]))
	{
		return (true);
	}
	return (false);
}

bool isDisplayable(char ch)
{
	return (ch >= 32 && ch <= 126);
}

bool isInt(const std::string &value)
{
	size_t pos = 0;
	try
	{
		std::stoi(value, &pos);
		if (pos == value.length())
			return (true);
	}
	catch (const std::invalid_argument &e)
	{
		std::cout << "Invalid argument: " << e.what() << "\n";
	}
	catch (const std::out_of_range &e)
	{
		std::cout << "Out of range: " << e.what() << "\n";
	}
	return (false);
}

bool isFloat(const std::string &value)
{
	size_t pos = 0;
	try
	{
		std::stof(value, &pos);
		if (pos == value.length())
			return (true);
	}
	catch (const std::invalid_argument &e)
	{
		std::cout << "Invalid argument: " << e.what() << "\n";
	}
	catch (const std::out_of_range &e)
	{
		std::cout << "Out of range: " << e.what() << "\n";
	}
	return (false);
}

bool isDouble(const std::string &value)
{
	size_t pos = 0;
	try
	{
		std::stod(value, &pos);
		if (pos == value.length())
			return (true);
	}
	catch (const std::invalid_argument &e)
	{
		std::cout << "Invalid argument: " << e.what() << "\n";
	}
	catch (const std::out_of_range &e)
	{
		std::cout << "Out of range: " << e.what() << "\n";
	}
	return (false);
}

LiteralType detectType(const std::string &value)
{
	if (isChar(value))
	{
		if (!isDisplayable(value[0]))
			return (LiteralType::NON_DISPLAYABLE);
		return (LiteralType::CHAR);
	}
	if (isInt(value))
		return (LiteralType::INT);
	if (isFloat(value))
		return (LiteralType::FLOAT);
	if (isDouble(value))
		return (LiteralType::DOUBLE);
	return (LiteralType::IMPOSSIBLE);
}

// --Member Functions-- //

void ScalarConverter::convert(const std::string value)
{

	LiteralType type = detectType(value);
	switch (type)
	{
		case LiteralType::CHAR:
			std::cout << "Type: CHAR\n";
			break ;
		case LiteralType::INT:
			std::cout << "Type: INT\n";
			break ;
		case LiteralType::FLOAT:
			std::cout << "Type: FLOAT\n";
			break ;
		case LiteralType::DOUBLE:
			std::cout << "Type: DOUBLE\n";
			break ;
		case LiteralType::IMPOSSIBLE:
			std::cout << "Type: IMPOSSIBLE\n";
			break ;
		case LiteralType::NON_DISPLAYABLE:
			std::cout << "Type: CHAR NON-DISPLAYABLE\n";
			break ;
	}
	// std::cout << "Original type: " << typeid(value).name() << "\n";
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
