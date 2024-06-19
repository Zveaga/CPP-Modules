/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/06/19 15:40:03 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

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

	std::cout << "\n--------------------------\n";
	std::cout << "\n========END========\n";
	return (0);
}
