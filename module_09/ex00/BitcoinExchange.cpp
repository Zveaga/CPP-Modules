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
		//std::cout << "YEAR:  " << year << "\n";
		//std::cout << "MONTH: " << month << "\n";
		//std::cout << "DAY:   " << day << "\n\n";
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

// bool checkValue(const std::string& valueStr)
// {
// 	try
// 	{
// 		size_t value = std::stoul(valueStr);
// 	}
// 		catch (std::invalid_argument& e)
// 	{
// 		return (false);
// 	}
// 	catch (std::out_of_range& e)
// 	{
// 		return (false);
// 	}
// 	return (true);
// }

void BitcoinExchange::performExchange(const std::string& date, float value)
{
	auto it = m_priceHistory.lower_bound(date);
	if (it != m_priceHistory.end() && it->first == date)		// exact match
	{
		std::cout << it->first << " => " << value << " = " << it->second * value << "\n";
	}
	else
	{
		if (it != m_priceHistory.begin())
		{
			--it;
		}
		std::cout << it->first << " => " << value << " = " << it->second * value << "\n";
	}
}

bool	BitcoinExchange::parseInput()
{
	std::ifstream file("input.csv");
	if (!file.is_open())
		return (false);
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		// std::cout << line << "\n";
		size_t pos = line.find('|');
		if (pos != std::string::npos)
		{
			std::string dateStr = line.substr(0, pos - 1);
			std::string valueStr = line.substr(pos + 1);
			if (!checkDate(dateStr))
			{
				std::cout << "Error: bad input => " << line << "\n";
				continue ;
			}
			//float value = std::stof(valueStr);
			// ! CHECK THE VALUE !
			// std::cout <<  value << "\n";

			performExchange(dateStr, std::stof(valueStr));

		}
		else
		{
			std::cout << "Error: bad input => " << line << "\n";
		}

	}
	file.close();
	return (true);
}


bool BitcoinExchange::parseDatabse()
{
	std::ifstream file("data.csv");
	if (!file.is_open())
		return (false);
	std::string line;
	std::getline(file,line);
	while (std::getline(file,line))
	{
		size_t pos = line.find(',');
		std::string dateStr = line.substr(0, pos);
		std::string valueStr = line.substr(pos + 1);
		m_priceHistory.emplace(dateStr, std::stof(valueStr));
		// std::cout << dateStr << "|" << valueStr << "\n";

	}
	
	// for (auto it = m_priceHistory.begin(); it != m_priceHistory.end(); ++it)
	// 	std::cout << it->first << ": " << std::fixed << std::setprecision(2) << it->second << "\n";
	return (true);
}


// bool BitcoinExchange::performExchange()
// {

// }



// --Exceptions-- //