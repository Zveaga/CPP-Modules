/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: raanghel <raanghel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/31 15:51:24 by raanghel      #+#    #+#                 */
/*   Updated: 2024/10/31 15:51:25 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <vector>
#include <set>
#include <algorithm>
#include <random>

class Span
{
	private:
		static int		genRandomNr();
		static int 		genConsecNr();
		static int		m_counter;
		unsigned int 	m_maxNums;
		std::set<int> 	m_nums;
		void			printNums();
		void			checkIfSpanPossible();

	public:
		// --Conststructors-- //
		Span();
		Span(unsigned int);
		Span(const Span &obj);
		// --Destructor-- //
		~Span();
		// --Overloads-- //
		Span 			&operator=(const Span &obj);
		// --Member Functions-- //
		void 			addNumber(unsigned int num);
		void 			addNumbers(size_t nElem);
		// void 			addNumbers(std::set<int>::iterator start, size_t nElem);
		int 			shortestSpan();
		int 			longestSpan();
};
