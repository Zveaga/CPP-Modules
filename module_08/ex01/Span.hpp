#pragma once

#include <iostream>
#include <vector>
#include <exception>
#include <set>

class Span
{
	private:
		unsigned int m_maxNums;
		std::set<int> m_nums;
		void			printNums();
		void			checkIfSpanPossible();
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
		void 			addNumbers(size_t containerSize);
		size_t 			shortestSpan();
		size_t 			longestSpan();
		// --Exceptions-- //
};

