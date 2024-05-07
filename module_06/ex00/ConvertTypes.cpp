#include"ConvertTypes.hpp"

// --TYPE DETECTION FUNCTIONS--//

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

// --DETECT TRAILING ZEROS-- //

bool hasTrailingZeros(const std::string &value, size_t pos)
{
	size_t len = value.length();
	if (value.back() == 'f')
		len = value.length() - 1;
	for (size_t i = pos + 1; i < len; i++)
	{
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
	return (count);
}

// --PRINTING FUNCTIONS-- //

void printFloat(const std::string &value, float f)
{
	size_t pos = value.find_first_of('.');
	if (pos == std::string::npos)
		std::cout << "float: " << f << ".0f\n";
	else
	{
		if (hasTrailingZeros(value, pos))
		{
			std::cout << "float: " << std::fixed << std::setprecision((countTrailingZeros(value, pos))) << f << "f\n";	
		}
		else
			std::cout << "float: " << f << "f\n";
	}
}

void printDouble(const std::string &value, double d)
{
	size_t pos = value.find_first_of('.');
	if (pos == std::string::npos)
		std::cout << "double: " << d << ".0\n";
	else
		std::cout << "double: " << d << "\n";
}

// --TYPE CONVERSION FUNCTIONS-- //

void stringToChar(int i)
{
	if (i < 0 || i > 127)
			std::cout << "char: impossible\n";
	else if (!std::isprint(i))
			std::cout << "char: Non displayable\n";
	else
	{
		char c = static_cast<char>(i);
		std::cout << "char: " << c << "\n";
	}
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
	}
}

void stringToFloat(const std::string &value)
{
	try
	{
		float f = static_cast<float>(std::stof(value));
		printFloat(value, f);
	}
	catch (...)
	{
		std::cout << "float: impossible (out of bounds)\n";
	}
}

void stringToDouble(const std::string &value)
{
	try
	{
		double d = static_cast<double>(std::stod(value));
		printDouble(value, d);
	}
	catch (...)
	{
		std::cout << "double: impossible (out of bounds)\n";
	}
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

void convertInt(const std::string &value)
{
	int i;
	try
	{
		i = static_cast<int>(std::stoi(value));
		stringToChar(i);
		std::cout << "int: " << i << "\n";
	}
	catch (...)
	{
		stringToChar(i);
		std::cout << "int: impossible (out of bounds)\n";
	}
	stringToFloat(value);
	stringToDouble(value);

}

void convertFloat(const std::string &value)
{
	float	f;
	
	try
	{
		f = static_cast<float>(std::stof(value));
		stringToChar(f);
		stringToInt(value);
		printFloat(value, f);
	}
	catch (...)
	{
		stringToChar(f);
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
		stringToChar(d);
		stringToInt(value);
		stringToFloat(value);
		printDouble(value, d);
	}
	catch (...)
	{
		stringToChar(d);
		stringToInt(value);
		stringToFloat(value);
		std::cout << "double: impossible (out of bounds)\n";
	}
}
