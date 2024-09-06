#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <fstream>
// #include <sstream>
#include <string>
#include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, int> 	m_priceHistory;
		std::map<int, int> 			m_input;
	public:
		// --Conststructors-- //
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &object);		
		// --Destructor-- //
		~BitcoinExchange();
		// --Overloads-- //
		BitcoinExchange &operator=(const BitcoinExchange &object);	
		// --Setters-- //
		// --Getters-- //
		// --Member Functions-- //
		bool	parseInput();
		bool	priceHistory();
		// --Exceptions-- //
};


#endif
