#ifndef CONVERT_TYPES_HPP
# define CONVERT_TYPES_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <limits>
#include <sstream>

bool	isPseudo(const std::string &value);
bool 	isChar(const std::string &value);
bool 	isInt(const std::string &value);
bool 	isFloat(const std::string &value);
bool 	isDouble(const std::string &value);
void 	convertChar(const std::string &value);
// void 	stringToChar(auto i);
void 	stringToChar(const std::string &value, int i);
bool 	hasTrailingZeros(const std::string &value, size_t pos);
int 	countTrailingZeros(const std::string &value, size_t pos);
void 	printFloat(const std::string &value, float f);
void 	printDouble(const std::string &value, double d);
void	printPseudo(const std::string &value);
void 	stringToInt(const std::string &value);
void 	stringToFloat(const std::string &value);
void 	stringToDouble(const std::string &value);
void 	convertInt(const std::string &value);
void 	convertFloat(const std::string &value);
void 	convertDouble(const std::string &value);

#endif
