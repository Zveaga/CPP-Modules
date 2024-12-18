/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: raanghel <raanghel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/31 15:51:19 by raanghel      #+#    #+#                 */
/*   Updated: 2024/10/31 15:51:20 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

int	Span::m_counter = 0;

// --Conststructors-- //
Span::Span() {}

Span::Span(unsigned int maxNums) : m_maxNums(maxNums) {}

Span::Span(const Span &obj) : 
	m_maxNums(obj.m_maxNums),
	m_nums(obj.m_nums) {}

// --Destructor-- //
Span::~Span() {}
	
// --Overloads-- //
Span &Span::operator=(const Span &obj)
{
	if (this != &obj)
	{
		m_maxNums = obj.m_maxNums;
		m_nums = obj.m_nums;
	}
	return (*this);
}

// --Member Functions-- //
void Span::addNumber(unsigned int num)
{
	if (m_nums.size() >= m_maxNums)
		throw std::range_error("Max limit reached, cannot add number");
	m_nums.insert(num);
	std::cout << "Number added\n";
	printNums();
	std::cout << "---------------------\n";
}

int Span::genRandomNr()
{
	std::random_device random;
	std::mt19937 gen(random());
	std::uniform_int_distribution<> dis(-100, 100);
	return (dis(gen));
}

int Span::genConsecNr()
{
	return (++m_counter);
}

void Span::addNumbers(size_t nElem)
{
	if (nElem > m_maxNums)
		throw std::range_error("Max limit reached, cannot add number");
	std::generate_n(std::inserter(m_nums, m_nums.begin()), nElem, genRandomNr);
	// std::generate_n(std::inserter(m_nums, m_nums.begin()), nElem, [this](){ return genConsecNr(); });
	printNums();
	std::cout << "---------------------\n";
}

int Span::shortestSpan()
{
	checkIfSpanPossible();
	std::set<int>::iterator first = m_nums.begin();
	std::set<int>::iterator second = std::next(first);
	int shortest = *second - *first;
	int span;
	while (second != m_nums.end())
	{
		span = *second - *first;
		if (span < shortest)
			shortest = span;
		++first;
		++second;
	}
	return (shortest);
}

int Span::longestSpan()
{
	checkIfSpanPossible();
	std::set<int>::iterator it = m_nums.begin();
	int first = *it;
	it = std::prev(m_nums.end());
	int last = *it;
	return (last - first);
}

void Span::printNums()
{
	std::cout << "Nums: ";
	for (auto it = m_nums.cbegin(); it != m_nums.cend(); ++it)
		std::cout << *it << " ";
	std::cout << "\n";
}

void Span::checkIfSpanPossible()
{
	if (m_nums.size() < 2)
		throw std::length_error("Container does not have enough elements to perform span operation");
}
