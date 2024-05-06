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

bool isChar(const std::string &value)
{
	if (value.empty() || value.length() != 1 || std::isdigit(value[0]))
		return (false);
	int i_value = static_cast<int>(value[0]);
	if (i_value < 0 || i_value > 127)
		return (false);
	return (true);
}

bool isInt(const std::string &value)
{
	if (value.empty())
		return (false);
	if (value.length() == 1 && value[0] == '0')
		return (true);
	size_t i = 0;
	if (value[i] == '-' || value[i] == '+')
		i++;
	for (; i < value.length(); ++i)
	{
		if (!std::isdigit(value[i]))
			return (false);
	}
	return (true);
}

bool isFloat(const std::string &value)
{
	if (value.empty() || value.back() != 'f')
		return (false);
	size_t i = 0;
	if (value[i] == '-' || value[i] == '+')
		i++;
	bool has_decimal = false;
	for (; i < value.length() - 1; ++i)
	{
		if (value[i] == '.' && !has_decimal)
			i++;
		if (!std::isdigit(value[i]))
			return (false);
	}
	return (true);
}

bool isDouble(const std::string &value)
{
	if (value.empty() || value.back() == 'f')
		return (false);
	size_t i = 0;
	if (value[i] == '-' || value[i] == '+')
		i++;
	bool has_decimal = false;
	for (; i < value.length(); ++i)
	{
		if (value[i] == '.' && !has_decimal)
			i++;
		if (!std::isdigit(value[i]))
			return (false);
	}
	return (true);
}

void convertToChar(const std::string &value)
{
	int i_value = static_cast<int>(value[0]);
	if (!std::isprint(value[0]))
		std::cout << "char: Non displayable\n";
	else if (i_value < 0 || i_value > 127)
	{
		std::cout << "char: impossible\n";
	}
	else
	{
		char as_char = static_cast<char>(value[0]);
		std::cout << "char: " << as_char << "\n";
	}

	std::cout << "int: " << i_value << "\n";
	std::cout << "float: " << i_value << ".0f\n";
	std::cout << "float: " << i_value << ".0\n";
}


// --Member Functions-- //

void ScalarConverter::convert(const std::string value)
{
	if (isChar(value))
	{
		std::cout << "CHAR\n\n";
		convertToChar(value);
		// return ;
	}
	else if (isInt(value))
	{
		std::cout <<  "INT\n\n";
		// return ;
	}
	else if (isFloat(value))
	{
		std::cout <<  "FLOAT\n\n";
		// return ;
	}
	else if (isDouble(value))
	{
		std::cout <<  "DOUBLE\n\n";
		// return ;
	}
	else
	{
		std::cout <<  "IMPOSSIBLE\n\n";
		return ;
	}
}



// void detectType(const std::string &value)
// {
// 	if (isChar(value))
// 	{
// 		std::cout << "CHAR\n";
// 		return ;
// 	}
// 	else if (isInt(value))
// 	{
// 		std::cout <<  "INT\n";
// 		return ;
// 	}
// 	else if (isFloat(value))
// 	{
// 		std::cout <<  "FLOAT\n";
// 		return ;
// 	}
// 	else if (isDouble(value))
// 	{
// 		std::cout <<  "DOUBLE\n";
// 		return ;
// 	}
// 	else
// 	{
// 		std::cout <<  "IMPOSSIBLE\n";
// 		return ;
// 	}
// }

// LiteralType detectType(const std::string &value)
// {
// 	char	asChar = '\0';
// 	int		asInt = 0;
// 	float	asFloat = 0;
// 	double	asDouble = 0;
// 	try
// 	{
// 		if (convertToChar(value))
// 		{
// 			if (!isDisplayable(value[0]))
// 				return (LiteralType::NON_DISPLAYABLE);
// 			return (LiteralType::CHAR);
// 		}
// 		if (convertToInt(value))
// 			return (LiteralType::INT);
// 		if (convertToFloat(value))
// 			return (LiteralType::FLOAT);
// 		if (convertToDouble(value))
// 			return (LiteralType::DOUBLE);
// 	}
// 	catch (const std::invalid_argument &e)
// 	{
// 		std::cout << "Invalid argument(DOUBLE): " << e.what() << "\n";
// 	}
// 	catch (const std::out_of_range &e)
// 	{
// 		std::cout << "Out of range(DOUBLE): " << e.what() << "\n";
// 	}
// 	return (LiteralType::IMPOSSIBLE);
// }




// bool convertToChar(const std::string &value)
// {
// 	if (value.length() == 1 && !std::isdigit(value[0]))
// 	{
// 		if (!isDisplayable(value[0]))
// 		{
// 			std::cout <<  "char: Non displayable\n";
// 			return (false);
// 		}
// 		return (true);
// 	}
// 	return (false);
// }


// bool convertToInt(const std::string &value, t_literals &literals)
// {
// 	size_t pos = 0;
// 	try
// 	{
// 		literals.asInt = std::stoi(value, &pos);
// 		if (pos == value.length())
// 			return (true);
// 	}
// 	catch (const std::invalid_argument &e)
// 	{
// 		std::cout << "Invalid argument(INT): " << e.what() << "\n";
// 	}
// 	catch (const std::out_of_range &e)
// 	{
// 		std::cout << "Out of range(INT): " << e.what() << "\n";
// 	}
	
// 	// catch (const std::invalid_argument &)
// 	// {
// 	// 	throw ;
// 	// }
// 	// catch (const std::out_of_range &)
// 	// {
// 	// 	throw ;
// 	// }
	
// 	return (false);
// }

// bool convertToFloat(std::string value, t_literals &literals)
// {
// 	if (value.back() == 'f' || value.back() == 'F')
// 		value.pop_back();
// 	else if (value.back() != 'f' || value.back() != 'F')
// 		return (false);
// 	size_t pos = 0;
// 	try
// 	{
// 		literals.asFloat = std::stof(value, &pos);
// 		if (pos == value.length())
// 			return (true);
// 	}
// 	catch (const std::invalid_argument &e)
// 	{
// 		std::cout << "Invalid argument(FLOAT): " << e.what() << "\n";
// 	}
// 	catch (const std::out_of_range &e)
// 	{
// 		std::cout << "Out of range(FLOAT): " << e.what() << "\n";
// 	}
	
// 	// catch (const std::invalid_argument &)
// 	// {
// 	// 	throw ;
// 	// }
// 	// 	catch (const std::out_of_range &)
// 	// 	{
// 	// 		throw ;
// 	// 	}

// 	return (false);
// }

// bool convertToDouble(const std::string &value, t_literals &literals)
// {
// 	if (value.back() == 'f' || value.back() == 'F')
// 		return (false);
// 	size_t pos = 0;
// 	try
// 	{
// 		literals.asDouble = std::stod(value, &pos);
// 		if (pos == value.length())
// 			return (true);
// 	}
// 	catch (const std::invalid_argument &e)
// 	{
// 		std::cout << "Invalid argument(DOUBLE): " << e.what() << "\n";
// 	}
// 	catch (const std::out_of_range &e)
// 	{
// 		std::cout << "Out of range(DOUBLE): " << e.what() << "\n";
// 	}



// std::string values[4] = {};

// enum class LiteralType
// {
// 	CHAR,
// 	INT,
// 	FLOAT,
// 	DOUBLE,
// 	IMPOSSIBLE,
// 	NON_DISPLAYABLE,
// };

// typedef struct s_literals
// {
// 	char	asChar = '\0';
// 	int		asInt = 0;
// 	float	asFloat = 0.0f;
// 	double	asDouble = 0.0;
// }			t_literals;

// bool isDisplayable(char ch)
// {
// 	return (ch >= 32 && ch <= 126);
// }

// bool convertToChar(const std::string &value)
// {
// 	if (value.length() == 1 && !std::isdigit(value[0]))
// 	{
// 		if (!isDisplayable(value[0]))
// 		{
// 			std::cout <<  "char: Non displayable\n";
// 			return (false);
// 		}
// 		return (true);
// 	}
// 	return (false);
// }


// bool convertToInt(const std::string &value)
// {
// 	size_t pos = 0;
// 	try
// 	{
// 		std::stoi(value, &pos);
// 		if (pos == value.length())
// 			return (true);
// 	}
// 	catch (const std::invalid_argument &e)
// 	{
// 		std::cout << "Invalid argument(INT): " << e.what() << "\n";
// 	}
// 	catch (const std::out_of_range &e)
// 	{
// 		std::cout << "Out of range(INT): " << e.what() << "\n";
// 	}
	
// 	// catch (const std::invalid_argument &)
// 	// {
// 	// 	throw ;
// 	// }
// 	// catch (const std::out_of_range &)
// 	// {
// 	// 	throw ;
// 	// }
	
// 	return (false);
// }

// bool convertToFloat(std::string value)
// {
// 	if (value.back() == 'f' || value.back() == 'F')
// 		value.pop_back();
// 	else if (value.back() != 'f' || value.back() != 'F')
// 		return (false);
// 	size_t pos = 0;
// 	try
// 	{
// 		std::stof(value, &pos);
// 		if (pos == value.length())
// 			return (true);
// 	}
// 	catch (const std::invalid_argument &e)
// 	{
// 		std::cout << "Invalid argument(FLOAT): " << e.what() << "\n";
// 	}
// 	catch (const std::out_of_range &e)
// 	{
// 		std::cout << "Out of range(FLOAT): " << e.what() << "\n";
// 	}
	
// 	// catch (const std::invalid_argument &)
// 	// {
// 	// 	throw ;
// 	// }
// 	// 	catch (const std::out_of_range &)
// 	// 	{
// 	// 		throw ;
// 	// 	}

// 	return (false);
// }

// bool convertToDouble(const std::string &value)
// {
// 	if (value.length() != 1 && (value.back() == 'f' || value.back() == 'F'))
// 		return (false);
// 	size_t pos = 0;
// 	try
// 	{
// 		std::stod(value, &pos);
// 		if (pos == value.length())
// 			return (true);
// 	}
// 	catch (const std::invalid_argument &e)
// 	{
// 		std::cout << "Invalid argument(DOUBLE): " << e.what() << "\n";
// 	}
// 	catch (const std::out_of_range &e)
// 	{
// 		std::cout << "Out of range(DOUBLE): " << e.what() << "\n";
// 	}
	
// 	// catch (const std::invalid_argument &)
// 	// {
// 	// 	throw ;
// 	// }
// 	// catch (const std::out_of_range &)
// 	// {
// 	// 	throw ;
// 	// }

// 	return (false);
// }