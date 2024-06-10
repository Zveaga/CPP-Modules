#pragma once

#include <iostream>
#include <vector>
#include <exception>

class Span
{
	private:
		unsigned int m_maxNums;
		std::vector<int> m_nums;
		void			printNums();
	public:
	// --Conststructors-- //
	Span();
	Span(unsigned int );
	// Span(const Span &obj);
	// --Destructor-- //
	~Span();
	// --Overloads-- //
	// Span 			&operator=(const Span &obj);
	// --Setters-- //
	// --Getters-- //
	// --Member Functions-- //
	void 			addNumber(unsigned int num);
	// unsigned int 	shortestSpan();
	// unsigned int 	longestSpan();
	// --Exceptions-- //
};

