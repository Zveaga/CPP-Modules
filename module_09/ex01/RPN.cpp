/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/27 16:16:10 by coxer         #+#    #+#                 */
/*   Updated: 2024/10/30 18:27:06 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"RPN.hpp"

// --Member Functions-- //
void RPN::calculate(const std::string& expr) {
	for (char elem : expr) {
		if (std::isdigit(elem)) {
			_myStack.push(elem - '0');
			// std::cout << elem << "\n";
		}
		else {
			if (!this->performCalculation(elem)) {
				std::cerr << "Error: Invalid input expression!\n";
                std::exit(EXIT_FAILURE);
			}
		}
	}
	if (_myStack.size() != 1) {
		std::cerr << "Error: Invalid input expression!\n";
        std::exit(EXIT_FAILURE);
	}
	std::cout << "Result: " << _myStack.top() << "\n";
}

bool RPN::performCalculation(char sign){
	if (_myStack.empty())
		return false;
	int elem2 = _myStack.top();
	_myStack.pop();
	if (_myStack.size() < 1)
		return false;
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
			if (elem2 == 0) {
                std::cerr << "Error: Division by zero!\n";
                std::exit(EXIT_FAILURE);
            }
            result = elem1 / elem2;
            break;
	}
	_myStack.push(result);
	return (true);
}

bool RPN::validateInput(const std::string& expr) {
	if (expr.empty() || expr[0] == ' ')
		return false;
	for (char c : expr) {
		// if (c != '+' && c != '-' && c != '*' && c != '/' && !std::isdigit(c) && (c ))
		// 	return false ;
		if ()

		
	}
	if (spaceCount != expr.length())
	return true;
}

std::string RPN::removeSpaces(const std::string& expr) {
	std::string newExpr;
	for (char c : expr) {
		if (!std::isspace(c))
			newExpr.push_back(c);
	}
	std::cout << newExpr << "\n";
	return newExpr;
}


// --Exceptions-- //


