#include"Span.hpp"


// --Conststructors-- //
Span::Span()
{

}

Span::Span(unsigned int maxNums) : m_maxNums(maxNums)
{

}

// Span::Span(const Span &obj)
// {

// }

// --Destructor-- //
Span::~Span()
{

}

// --Overloads-- //
// Span &Span::operator=(const Span &obj)
// {

// }

// --Setters-- //
// --Getters-- //
// --Member Functions-- //

void Span::addNumber(unsigned int num)
{
	if (m_nums.size() >= m_maxNums)
		throw std::out_of_range("Max limit reached, cannot add number");
	m_nums.push_back(num);
	std::cout << "Number added\n";
	printNums();
}

// unsigned int Span::shortestSpan()
// {

// }

// unsigned int Span::longestSpan()
// {

// }

void Span::printNums()
{
	std::cout << "Nums: ";
	for (std::vector<int>::const_iterator it = m_nums.begin(); it != m_nums.end(); ++it)
		std::cout << *it << " ";
	std::cout << "\n";
}


// --Exceptions-- //