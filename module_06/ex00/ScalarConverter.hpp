#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <iostream>
#include <string>
#include <cctype>

class ScalarConverter
{
	private:
		// --Conststructors-- //
		ScalarConverter();
		ScalarConverter(const ScalarConverter &object);
	public:
		// --Destructor-- //
		~ScalarConverter();
		// --Overloads-- //
		ScalarConverter &operator=(const ScalarConverter &object);
		// --Member Functions-- //
		static void convert(const std::string value);
};


#endif
