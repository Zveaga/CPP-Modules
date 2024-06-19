#pragma once

#include <iostream>
#include <stack>
#include <deque>

template <class T, class Container = std::deque<T>>
class MutantStack
{
    private:
        Container			m_stack;
    public:
        // --Conststructors-- //
        MutantStack();
        MutantStack(const MutantStack &obj);
		// --Destructor-- //
        ~MutantStack();
        // --Overloads-- //
        MutantStack &operator=(const MutantStack &obj);
		// --Setters-- //
		// --Getters-- //
        Container           getStack();
		// --Member Functions-- //
        bool            	empty() const;
        size_t          	size() const;
        T      				&top();
        const T				&top() const;
        void            	push(const T  &val);
        void            	push(T  &&val);
		void				pop();
		void				swap(MutantStack &obj) noexcept;	
		
		template <class... Args>
		void 				emplace(Args&&... args);
        // reference &top();
		// --Exceptions-- //

};


// --Conststructors-- //

template <class T, class Container>
MutantStack<T, Container>::MutantStack() {}

template <class T, class Container>
MutantStack<T, Container>::MutantStack(const MutantStack &obj) : m_stack(obj->m_stack) {}

// --Destructor-- //
template <class T, class Container>
MutantStack<T, Container>::~MutantStack() {}

// --Overloads-- //
template <class T, class Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack &obj)
{
    if (this != &obj)
    {
        m_stack = obj.m_stack;
    }
    return (*this);
}

template <class T, class Container>
Container MutantStack<T, Container>::getStack()
{
	return (m_stack);
}


// --Member Functions-- //
template <class T, class Container>
bool MutantStack<T, Container>::empty() const
{
    return (m_stack.empty());
}

template <class T, class Container>
size_t MutantStack<T, Container>::size() const
{
    return (m_stack.size());
}

template <class T, class Container>
T &MutantStack<T, Container>::top()
{
    
}

template <class T, class Container>
const T	&MutantStack<T, Container>::top() const
{
    
}

template <class T, class Container>
void MutantStack<T, Container>::push(const T  &val)
{
    return (m_stack.push_back(val));
}

template <class T, class Container>
void MutantStack<T, Container>::push(T  &&val)
{
    return (m_stack.push_back(std::move(val)));
    
}

template <class T, class Container>
void MutantStack<T, Container>::pop()
{
    return (m_stack.pop_back());
}

template <class T, class Container>
void MutantStack<T, Container>::swap(MutantStack &x) noexcept
{
    
}	

template <class T, class Container>
template <class... Args>
void MutantStack<T, Container>::emplace(Args&&... args)
{
    
}
