#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <string>

class RPN
{
	private:
		std::stack<int> _myStack;
	public:
		// --Conststructors-- //
		RPN() = default;
		RPN(const RPN& obj) = default;
		// --Destructor-- //
		~RPN() = default;
		// --Overloads-- //
		RPN& operator=(const RPN& obj) = default;
		// --Setters-- //
		// --Getters-- //
		// --Member Functions-- //
		std::string		removeSpaces(const std::string& str);
		bool			validateInput(const std::string& str);
		void			calculate(const std::string& expr);
		bool			performCalculation(char sign);
		// --Exceptions-- //
};


#endif
