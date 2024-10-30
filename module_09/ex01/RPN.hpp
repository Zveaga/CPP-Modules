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
		void	calculate(std::string expr);
		void	performCalculation(char sign);
		// --Exceptions-- //
};


#endif
