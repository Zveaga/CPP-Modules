/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/08 15:22:07 by coxer         #+#    #+#                 */
/*   Updated: 2024/11/05 16:30:48 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// --Conststructors-- //
BitcoinExchange::BitcoinExchange() {}


BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj) : m_data(obj.m_data) {}

// --Destructor-- //
BitcoinExchange::~BitcoinExchange() {}

// --Overloads-- //
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{
	if (this != &obj)
		m_data = obj.m_data;
	return (*this);
}

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
	if (pos == std::string::npos)
		return (false);
	std::string yearStr = date.substr(0, pos);
	pos = date.find('-', pos + 1);
	if (pos == std::string::npos)
		return (false);
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
			return (false);
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

bool checkValue(const std::string& valueStr)
{
	if (valueStr.empty())
		return (false);
	int spaceCount = 0;
	int dotCount = 0;
	for (char c : valueStr)
	{
		if (c == ' ')
			spaceCount++;
		else if (c == '.')
			dotCount++;
	}
	if (spaceCount != 1 || dotCount > 1 || valueStr.back() == '.')
		return false;
	for (char c : valueStr)
	{
		if (!std::isdigit(c) && c != ' ' && c != '.')
			return false;
	}
	try
	{
		float value = std::stof(valueStr);
		if (value > 1000 || value < 0)
			return (false);
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

void BitcoinExchange::performExchange(const std::string& date, float value)
{
	auto it = m_data.lower_bound(date);
	if (it != m_data.end() && it->first == date)		// exact match
		std::cout << it->first << " => " << value << " = " << it->second * value << "\n";
	else
	{
		if (it != m_data.begin())
			--it;
		std::cout << it->first << " => " << value << " = " << it->second * value << "\n";
	}
}

bool	BitcoinExchange::parseInputAndPerformExchange(const std::string& inputFile)
{
	std::ifstream file(inputFile);
	if (!file.is_open())
	{
		std::cout << "Error: failed to open input file!\n";
		return (false);
	}
	std::string line;
	std::getline(file, line);
	if (!file || line.empty() || line != "date | value") {
		std::cout << "Error: bad input => " << line << "\n";
	}
	while (std::getline(file, line))
	{
		size_t pos = line.find('|');
		if (pos != std::string::npos)
		{
			std::string dateStr = line.substr(0, pos - 1);
			std::string valueStr = line.substr(pos + 1);
			// std::cout << "Date:" << dateStr << "-\n";
			// std::cout << "Value:" << valueStr << "-\n";
			if (!checkDate(dateStr) || !checkValue(valueStr))
			{
				std::cout << "Error: bad input => " << line << "\n";
				continue ;
			}
			performExchange(dateStr, std::stof(valueStr));
		}
		else
			std::cout << "Error: bad input => " << line << "\n";

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
		m_data.emplace(dateStr, std::stof(valueStr));
	}
	return (true);
}
