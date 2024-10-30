#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>

class RPN
{
	private:

	public:
		// --Conststructors-- //
		RPN() = default;
		RPN(const RPN& obj) = default;
		// --Destructor-- //
		~RPN();
		// --Overloads-- //
		RPN& operator=(const RPN& obj) = default;
		// --Setters-- //
		// --Getters-- //
		// --Member Functions-- //
		void	calculate(const std::string& expr);
		// --Exceptions-- //
};


#endif
