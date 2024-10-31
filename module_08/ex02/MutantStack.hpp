#pragma once

#include <iostream>
#include <stack>
#include <deque>
#include <vector>
// #include <iterator>

/** 
 * Needed for iterator implementaion:
 * 1. begin point
 * 2. end point
 * 3. operator++ | operator--
 * 4. operator*
*/

template <class T, class Container = std::deque<T>>
class MutantStack : std::stack<T, Container>
{
    public:
		iterator begin();
		iterator end();
        // --Conststructors-- //
        MutantStack();
        MutantStack(const MutantStack &obj);
		// --Destructor-- //
        ~MutantStack();
        // --Overloads-- //
        MutantStack &operator=(const MutantStack &obj);
};


// template<class T, class Container>
// class MutantStack<T, Container>::iterator
// {
// 	private:
// 		typename Container::iterator m_current;
// 	public:
// 		// --Conststructors-- //
// 		iterator();
// 		iterator(typename Container::iterator current);
// 		iterator(const iterator &obj);
// 		// --Destructor-- //
// 		~iterator();
// 		// --Overloads-- //
// 		bool 		operator!=(const iterator &obj) const;
// 		bool		operator<(const iterator &obj) const;
// 		bool		operator>(const iterator &obj) const;
// 		T& 			operator*();
// 		iterator&	operator=(const iterator &obj);
// 		iterator&	operator++();
// 		iterator	operator++(int);
// 		iterator&	operator--();
// 		iterator	operator--(int);
// 		// --Member Functions-- //

// };


template <class T, class Container>

{
	return (this->c.begin();
}


template <class T, class Container>
typename MutantStack<T, Container>::MutantStack end()
{
	return (this->c.end());
}

// --Conststructors-- //
template <class T, class Container>
MutantStack<T, Container>::MutantStack(): {}

template <class T, class Container>
MutantStack<T, Container>::MutantStack(const MutantStack &obj) : std::stack<T, std::dequeT>>(obj) {}

// --Destructor-- //
template <class T, class Container>
MutantStack<T, Container>::~MutantStack() {}

// --Overloads-- //
template <class T, class Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack &obj)
{
    if (this != &obj)
		this->c = obj.c;
    return (*this);
}




// // --Member Functions-- //
// template <class T, class Container>
// bool MutantStack<T, Container>::empty() const
// {
//     return (m_stack.empty());
// }

// template <class T, class Container>
// size_t MutantStack<T, Container>::size() const
// {
//     return (m_stack.size());
// }

// template <class T, class Container>
// T &MutantStack<T, Container>::top()
// {
//     return (m_stack.back());
// }

// template <class T, class Container>
// const T	&MutantStack<T, Container>::top() const
// {
//     return (m_stack.back());
// }

// template <class T, class Container>
// void MutantStack<T, Container>::push(const T  &val)
// {
//     m_stack.push_back(val);
// }

// template <class T, class Container>
// void MutantStack<T, Container>::push(T  &&val)
// {
// 	m_stack.push_back(std::move(val));
    
// }

// template <class T, class Container>
// void MutantStack<T, Container>::pop()
// {
//     m_stack.pop_back();
// }

// template <class T, class Container>
// void MutantStack<T, Container>::swap(MutantStack &obj) noexcept
// {
//     std::swap(m_stack, obj.m_stack);
// }	

// template <class T, class Container>
// template <class... Args>
// void MutantStack<T, Container>::emplace(Args&&... args)
// {
//     m_stack.emplace_back(args...);
// }

// template <class T, class Container>
// void MutantStack<T, Container>::printStack()
// {
// 	for (const auto &elem : m_stack)
// 		std::cout << elem << " ";
// 	std::cout << '\n';
// }








// // ================ITERATOR CLASS================ //
// // --Conststructors-- //
// template <class T, class Container>
// MutantStack<T, Container>::iterator::iterator()
// 	: m_current() {}

// template <class T, class Container>
// MutantStack<T, Container>::iterator::iterator(const iterator &obj)
// 	: m_current(obj.m_current) {}

// template <class T, class Container>
// MutantStack<T, Container>::iterator::iterator(typename Container::iterator current)
// 	: m_current(current) {}

// // --Destructor-- //
// template <class T, class Container>
// MutantStack<T, Container>::iterator::~iterator() {}

// // --Overloads-- //
// template <class T, class Container>
// bool MutantStack<T, Container>::iterator::operator!=(const iterator &obj) const
// {
// 	return (m_current != obj.m_current);
// }

// template <class T, class Container>
// bool MutantStack<T, Container>::iterator::operator<(const iterator &obj) const
// {
// 	return (m_current < obj.m_current);
// }

// template <class T, class Container>
// bool MutantStack<T, Container>::iterator::operator>(const iterator &obj) const
// {
// 	return (m_current > obj.m_current);
// }

// template <class T, class Container>
// T& MutantStack<T, Container>::iterator::operator*()
// {
// 	return (*m_current);
// }

// template <class T, class Container>
// typename MutantStack<T, Container>::iterator& MutantStack<T, Container>::iterator::operator=(const iterator &obj)
// {
// 	if (*this != obj)
// 		m_current = obj.m_current;
// 	return (*this);
// }

// template <class T, class Container>
// typename MutantStack<T, Container>::iterator& MutantStack<T, Container>::iterator::operator++()
// {
// 	++m_current;
// 	return (*this);
// }

// template <class T, class Container>
// typename MutantStack<T, Container>::iterator MutantStack<T, Container>::iterator::operator++(int)
// {
// 	iterator temp = *this;
// 	++m_current;
// 	return (temp);
// }

// template <class T, class Container>
// typename MutantStack<T, Container>::iterator& MutantStack<T, Container>::iterator::operator--()
// {
// 	--m_current;
// 	return (*this);
// }

// template <class T, class Container>
// typename MutantStack<T, Container>::iterator MutantStack<T, Container>::iterator::operator--(int)
// {
// 	iterator temp = *this;
// 	--m_current;
// 	return (temp);
// }
