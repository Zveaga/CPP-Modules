/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/07/02 16:40:55 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main(void)
{	
	// std::cout << "\n========START========\n\n";
	MutantStack<int> stack1;
	MutantStack<int> stack2;
	int a = 3;
	int b = 6;

	std::cout << "\n========MEMBER FUNCTIONS========";
	std::cout << "\n-------push, emplace-------\n\n";
	stack1.push(1);
	stack1.push(2);
	stack1.push(a);
	
	stack2.emplace(4);
	stack2.emplace(5);
	stack2.emplace(b);
	
	std::cout << "STACK1: ";
	stack1.printStack();
	std::cout << "STACK2: ";
	stack2.printStack();
	std::cout << "\n\n-----------empty-----------\n\n";
	std::cout << (stack1.empty() ? "Stack empty\n" : "Stack not empty\n");
	std::cout << "\n-----------size-----------\n\n";
	std::cout << "Size: " << stack1.size() << "\n";
	std::cout << "\n-----------top------------\n\n";
	std::cout << "Top elem: " << stack1.top() << '\n';
	std::cout << "Top elem (const): " << stack1.top() << '\n';
	std::cout << "\n-----------pop------------\n\n";
	stack1.pop();
	stack1.printStack();
	std::cout << "\n-----------swap------------\n\n";
	stack1.swap(stack2);
	std::cout << "STACK1: ";
	stack1.printStack();
	std::cout << "STACK2: ";
	stack2.printStack();

	std::cout << "\n========TEST ITERATORS========\n";

	std::list<int> mstack1;
	for (size_t i = 0; i < 10; ++i)
		mstack1.push_back(i);	
	std::list<int>::iterator _it = mstack1.begin();
	std::list<int>::iterator _ite = mstack1.end();
	_it++;
	_ite--;
	std::cout << "\nstd::list: ";
	while (_it != _ite) 
		std::cout << *_it++ << ' '; 

	MutantStack<int> mstack2;
	for (size_t i = 0; i < 10; ++i)
		mstack2.push(i);	
	MutantStack<int>::iterator it = mstack2.begin();
	MutantStack<int>::iterator ite = mstack2.end();
	++it;
	--ite;
	std::cout << "\nown stack: ";
	while (it != ite) 
		std::cout << *it++ << ' '; 
	

	std::cout << "\n========TEST OTHER TYPES========\n\n";

	MutantStack<std::string, std::vector<std::string>> stackStr;
	
	for (size_t i = 0; i < 5; ++i)
		stackStr.push("TEST");
	stackStr.printStack();
	stackStr.pop();
	stackStr.printStack();
	
	std::cout << "\n==============END==============\n";
	return (0);
}
