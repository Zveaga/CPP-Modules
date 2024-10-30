/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/27 16:16:10 by coxer         #+#    #+#                 */
/*   Updated: 2024/10/30 16:20:22 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"RPN.hpp"

// --Member Functions-- //
void RPN::calculate(std::string expr) {
	for (char elem : expr) {
		if (std::isdigit(elem)) {
			_myStack.push(elem - '0');
			std::cout << elem << "\n";
		}
		else {
			this->performCalculation(elem);
		}
	}
	std::cout << "Result: " << _myStack.top() << "\n";
}

void RPN::performCalculation(char sign){
	int elem2 = _myStack.top();
	_myStack.pop();
	int elem1 = _myStack.top();
	_myStack.pop();
	int result;
	switch (sign) {
		case '+':
			result = elem1 + elem2;
			break ;
		case '-':
			result = elem1 - elem2;
			break ;
		case '*':
			result = elem1 * elem2;
			break ;
		case '/':
            result = elem1 / elem2;
		
			// if (elem2 != 0) {
            //     result = elem1 / elem2;
            // } else {
            //     std::cerr << "Error: Division by zero!" << std::endl;
            //     return;
            // }
            break;
	}
	_myStack.push(result);
}


// --Exceptions-- //


