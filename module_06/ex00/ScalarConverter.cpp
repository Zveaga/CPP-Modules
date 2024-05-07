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
	size_t	dot_count = 0;
	for (; i < value.length() - 1; ++i)
	{
		if (value[i] == '.' && dot_count < 1)
		{
			i++;
			dot_count++;
			if (dot_count > 1)
				return (false);
		}
		if (!std::isdigit(value[i]))
			return (false);
	}
	return (true);
}

bool isDouble(const std::string &value)
{
	if (value.empty() || value.back() == 'f')
		return (false);
	size_t 	i = 0;
	if (value[i] == '-' || value[i] == '+')
		i++;
	size_t	dot_count = 0;
	for (; i < value.length(); ++i)
	{
		if (value[i] == '.' && dot_count < 1)
		{
			i++;
			dot_count++;
			if (dot_count > 1)
				return (false);
		}
		if (!std::isdigit(value[i]))
			return (false);
	}
	return (true);
}

void convertChar(const std::string &value)
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

void charCheck(int i)
{
	if (i < 0 || i > 127)
			std::cout << "char: impossible\n";
	else if (!std::isprint(i))
			std::cout << "char: Non displayable\n";
}

// void convertInt(const std::string &value)
// {
// 	int					i;
// 	std::stringstream	stream(value);

// 	stream >> i;
// 	if (stream.fail())
// 	{
// 		std::cout << "Stream failed\n";
// 		return ;
// 	}
// 	// std::cout << value << "\n";
// 	// try
// 	// {
// 	// 	i = static_cast<int>(std::stoi(value));
// 	// 	charCheck(i);
// 	// 	std::cout << "int: " << i << "\n";
// 	// }
// 	// catch (...)
// 	// {
// 	// 	charCheck(i);
// 	// 	std::cout << "int: impossible (out of bounds)\n";
// 	// }

// 	// std::cout <<
// 	// if (i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min())
// 	// 	std::cout << "int: impossible\n";
	
// }

bool hasTrailingZeros(const std::string &value, size_t pos)
{
	size_t len = value.length();
	if (value.back() == 'f')
		len = value.length() - 1;
	
	// std::cout << "len: " << len << "\n";
	// std::cout << "pos: " << pos << "\n";
	for (size_t i = pos + 1; i < len; i++)
	{
		// std::cout << "value[i]: " << value[i] << "\n";
		if (value[i] != '0')
			return (false);
	}
	return (true);
}

int countTrailingZeros(const std::string &value, size_t pos)
{
	size_t len = 0;
	if (value.back() == 'f')
		len = value.length() - 1;
	else
		len = value.length();
	size_t count = 0;
	for (size_t i = pos + 1; i < len; i++)
		count++;
	//std::cout << "\nCOUNT: " << count << "\n";
	return (count);
}

void printFloat(const std::string &value, float f)
{
	size_t pos = value.find_first_of('.');
	if (pos == std::string::npos)
	{

		// std::cout << "pos: " << pos << "f\n";
		std::cout << "float: " << f << "f\n";
	}
	else
	{
		// std::cout << "value[pos] = " << value[pos] << "\n";
		if (hasTrailingZeros(value, pos))
		{
			std::cout << "float: " << std::fixed << std::setprecision((countTrailingZeros(value, pos))) << f << "f\n";	
			// std::cout.copyfmt(std::ostream(nullptr));
		}
		else
			std::cout << "float: " << f << "f\n";
	}
}


void printDouble(const std::string &value, double d)
{
	size_t pos = value.find_first_of(value, '.');
	if (pos == std::string::npos)
		std::cout << "double: " << d << "\n";
	else
		std::cout << "double: " << d << "\n";
}

void stringToInt(const std::string &value)
{
	int i;
	try
	{
		i = static_cast<int>(std::stoi(value));
		std::cout << "int: " << i << "\n";
	}
	catch (...)
	{
		std::cout << "int: impossible (out of bounds)\n";
		// throw 1;
	}
}

void stringToFloat(const std::string &value)
{
	try
	{
		float f = static_cast<float>(std::stof(value));
		printFloat(value, f);
		// std::cout << "float: " << f << ".0f\n";
	}
	catch (...)
	{
		std::cout << "float: impossible (out of bounds)\n";
		// throw 2;
	}
}

void stringToDouble(const std::string &value)
{
	try
	{
		double d = static_cast<double>(std::stod(value));
		printDouble(value, d);
		// std::cout << "double: " << d << ".0\n";
	}
	catch (...)
	{
		std::cout << "double: impossible (out of bounds)\n";
		// throw 3;
	}
}

void convertInt(const std::string &value)
{
	int i;
	// std::cout << value << "\n";
	try
	{
		i = static_cast<int>(std::stoi(value));
		charCheck(i);
		std::cout << "int: " << i << "\n";
	}
	catch (...)
	{
		charCheck(i);
		std::cout << "int: impossible (out of bounds)\n";
	}
	stringToFloat(value);
	stringToDouble(value);
	// if (i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min())
	// 	std::cout << "int: impossible\n";
}


void convertFloat(const std::string &value)
{
	float	f;
	
	try
	{
		f = static_cast<float>(std::stof(value));
		// std::cout << "float: " << f << "\n";
		charCheck(f);
		stringToInt(value);
		printFloat(value, f);
		// std::cout << "float: " << f << ".0f\n";
	}
	catch (...)
	{
		charCheck(f);
		stringToInt(value);
		std::cout << "float: impossible (out of bounds)\n";
	}
	stringToDouble(value);
}

void convertDouble(const std::string &value)
{
	double	d;
	
	try
	{
		d = static_cast<double>(std::stod(value));
		charCheck(d);
		stringToInt(value);
		stringToFloat(value);
		printDouble(value, d);
		// std::cout << "double: " << d << "\n";
	}
	catch (...)
	{
		charCheck(d);
		stringToInt(value);
		stringToFloat(value);
		std::cout << "double: impossible (out of bounds)\n";
	}
}

// --Member Functions-- //

void ScalarConverter::convert(const std::string value)
{
	if (isChar(value))
	{
		std::cout << "CHAR\n\n";
		convertChar(value);
		// return ;
	}
	else if (isInt(value))
	{
		std::cout <<  "INT\n\n";
		convertInt(value);
		// return ;
	}
	else if (isFloat(value))
	{
		std::cout <<  "FLOAT\n\n";
		convertFloat(value);
		// return ;
	}
	else if (isDouble(value))
	{
		std::cout <<  "DOUBLE\n\n";
		convertDouble(value);
		// return ;
	}
	else
	{
		std::cout <<  "IMPOSSIBLE\n\n";
		return ;
	}
}

// void convertInt(const std::string &value)
// {
// 	int i;
// 	// std::cout << value << "\n";
// 	try
// 	{
// 		i = static_cast<int>(std::stoi(value));
// 		charCheck(i);
// 		std::cout << "int: " << i << "\n";
// 	}
// 	catch (...)
// 	{
// 		charCheck(i);
// 		std::cout << "int: impossible (out of bounds)\n";
// 	}

// 	try
// 	{
// 		float i = static_cast<float>(std::stof(value));
// 		std::cout << "float: " << i << ".0f\n";
// 	}
// 	catch (...)
// 	{
// 		std::cout << "float: impossible (out of bounds)\n";
// 	}
// 	try
// 	{
// 		double i = static_cast<double>(std::stod(value));
// 		std::cout << "double: " << i << ".0\n";
// 	}
// 	catch (...)
// 	{
// 		std::cout << "double: impossible (out of bounds)\n";
// 	}
// 	// if (i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min())
// 	// 	std::cout << "int: impossible\n";
// }

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