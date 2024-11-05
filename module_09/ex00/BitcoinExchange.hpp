#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <iomanip>  

class BitcoinExchange
{
	private:
		std::map<std::string, float> m_data;
	public:
		// --Conststructors-- //
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &object);		
		// --Destructor-- //
		~BitcoinExchange();
		// --Overloads-- //
		BitcoinExchange &operator=(const BitcoinExchange &object);	
		// --Member Functions-- //
		bool	parseInputAndPerformExchange(const std::string& inputFile);
		bool	parseDatabse();
		void	performExchange(const std::string& date, float value);
};

#endif
