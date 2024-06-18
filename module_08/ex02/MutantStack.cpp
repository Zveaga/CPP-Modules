/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/18 15:59:10 by coxer         #+#    #+#                 */
/*   Updated: 2024/06/18 20:00:47 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


template <class T, class Container>
MutantStack<T, Container>::MutantStack()
{
    
}

MutantStack::MutantStack(const MutantStack &obj)
{
    
}

// --Destructor-- //
MutantStack::~MutantStack()
{
    
}

// --Overloads-- //
MutantStack::MutantStack &operator=(const MutantStack &obj)
{
    
}

// --Setters-- //
// --Getters-- //
// --Member Functions-- //
bool            	MutantStack::empty() const
{
    
}

size_t          	MutantStack::size() const
{
    
}

T      	&MutantStack::top()
{
    
}

const T	&MutantStack::top() const
{
    
}

void            	MutantStack::push(const T  &val)
{
    
}

void            	MutantStack::push(T  &&val)
{
    
}

void				MutantStack::pop()
{
    
}

void				MutantStack::swap(stack &x) noexcept
{
    
}	


template <class... Args>
void 				MutantStack::emplace(Args&&... args)
{
    
}
