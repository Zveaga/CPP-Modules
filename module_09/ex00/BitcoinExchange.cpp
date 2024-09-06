#include "BitcoinExchange.hpp"


// --Conststructors-- //

BitcoinExchange::BitcoinExchange() {}


BitcoinExchange::BitcoinExchange(const BitcoinExchange &object)
{
	(void) object;
}

// --Destructor-- //

BitcoinExchange::~BitcoinExchange() {}

// --Overloads-- //

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &object)
{
	// no need to copy const values!!
	(void) object;
	return (*this);
}


// --Setters-- //


// --Getters-- //

// 2012-01-11 | -1
// --Member Functions-- //

bool checkDigit(const std::string& str)
{
	for (char c : str)
		if (!std::isdigit(c))
			return (false);
	return (true);
}

bool checkDate(std::string& date)
{
	size_t pos = date.find('-');

	std::string yearStr = date.substr(0, pos);
	pos = date.find('-', pos + 1);
	std::string monthStr = date.substr(yearStr.length() + 1, pos - (yearStr.length() + 1));
	std::string dayStr = date.substr(pos + 1);
	if (!checkDigit(yearStr) || !checkDigit(monthStr) || !checkDigit(dayStr))
		return (false);
	try
	{
		unsigned long year = std::stoul(yearStr);
		unsigned long month = std::stoul(monthStr);
		unsigned long day = std::stoul(dayStr);
		if (year > 2024 || (month < 1 || month > 12) || (day > 31 || day == 0))
		{
			return (false);
		}
		std::cout << "YEAR:  " << year << "\n";
		std::cout << "MONTH: " << month << "\n";
		std::cout << "DAY:   " << day << "\n\n";
	}
	catch (std::invalid_argument& e)
	{
		return (false);
	}
	catch (std::out_of_range& e)
	{
		return (false);
	}


	return (true);
}

bool	BitcoinExchange::parseInput()
{
	std::ifstream file("input.csv");
	if (!file.is_open())
		return (false);
	std::string line;
	std::string date;
	std::string tempValue;
	// int 		value;
	size_t pos;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		// std::cout << line << "\n";
		pos = line.find('|');
		if (pos != std::string::npos)
		{
			date = line.substr(0, pos - 1);
			if (!checkDate(date))
			{
				std::cout << "INVALID DATE\n";
				continue ;
			}
			tempValue = line.substr(pos + 1);
			//std::cout << line.substr(0, pos - 1) << " | " << line.substr(pos + 1) << "\n";
			// m_input.emplace(line.substr(0, pos - 1), line.substr(pos + 1))
		}
		else
		{
			std::cout << "Error: bad input => " << line << "\n\n";
		}

	}
	
	file.close();
	return (true);
}




// --Exceptions-- //