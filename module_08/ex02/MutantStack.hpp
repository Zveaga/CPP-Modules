#pragma once

#include <iostream>
#include <stack>
#include <deque>
#include <vector>

template <class T, class Container = std::deque<T>>
class MutantStack : public std::stack<T, Container>
{
    public:
        // --Iterators-- //
		typedef typename Container::iterator iterator; 
		typedef typename Container::const_iterator const_iterator; 
		iterator begin();
		iterator end();
		const_iterator begin() const;
		const_iterator end() const;
        // --Conststructors-- //
        MutantStack();
        MutantStack(const MutantStack &obj);
		// --Destructor-- //
        ~MutantStack();
        // --Overloads-- //
        MutantStack &operator=(const MutantStack &obj);
		void printStack(const MutantStack& myStack);
};


// --Iterators-- //
template <class T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin()
{
	return (this->c.begin());
}

template <class T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end()
{
	return (this->c.end());
}

template <class T, class Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::begin() const
{
	return (this->c.begin());
}

template <class T, class Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::end() const
{
	return (this->c.end());
}

// --Conststructors-- //
template <class T, class Container>
MutantStack<T, Container>::MutantStack() {}

template <class T, class Container>
MutantStack<T, Container>::MutantStack(const MutantStack &obj) : std::stack<T, Container>(obj) {}

// --Destructor-- //
template <class T, class Container>
MutantStack<T, Container>::~MutantStack() {}

// --Overloads-- //
template <class T, class Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack &obj)
{
    if (this != &obj) {
		std::stack<T, Container>::operator=(obj);
		// this->c = obj.c;
	}
    return (*this);
}

template <class T, class Container>
void MutantStack<T, Container>::printStack(const MutantStack& myStack)
{
	for (const auto nr : myStack)
		std::cout << nr << " ";
	std::cout << '\n';
}
