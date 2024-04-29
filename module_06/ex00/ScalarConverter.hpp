#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <iostream>

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
		ScalarConverter(const ScalarConverter &object);
		// --Member Functions-- //
		static void convert(const std::string &literal);
};


#endif
