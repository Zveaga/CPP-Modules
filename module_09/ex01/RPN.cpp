/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/27 16:16:10 by coxer         #+#    #+#                 */
/*   Updated: 2024/11/01 17:28:35 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"RPN.hpp"

// --Member Functions-- //
bool RPN::calculate(const std::string& expr) {
	for (char elem : expr) {
		if (std::isdigit(elem)) {
			_myStack.push(elem - '0');
		}
		else {
			if (!this->performCalculation(elem)) {
				std::cerr << "Error: Invalid format!\n";
                return false;
			}
		}
	}
	if (_myStack.size() != 1) {
		std::cerr << "Error: Invalid format!\n";
        return false;
	}
	std::cout << "Result: " << _myStack.top() << "\n";
	return true;
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

bool checkSpaces(const std::string& expr) {
	int operatorCount = 0;
	int spaceCount = 0;
	int elemCount = 0;
	for (char c : expr) {
		if (c == '+' || c == '-' || c == '*' || c == '/')
			operatorCount++;
		else if (c == ' ')
			spaceCount++;
		else
			elemCount++;
	}
	// std::cout << "space:    " << spaceCount << "\n";
	// std::cout << "operator: " <<operatorCount << "\n";
	// std::cout << "elem:     " << elemCount << "\n";
	if (spaceCount != operatorCount + elemCount - 1) {
		std::cerr << "Error: Contains invalid spaces!\n";
		return false;
	}
	return true;
}

bool checkDoubleChars(const std::string& expr) {
	for (size_t i = 0; i < expr.length(); ++i) {
		if (expr[i] != ' ' && i < expr.length() - 1) {
			if (expr[i + 1] != ' ') {
				std::cerr << "Error: Contains elements comprised of 2 characters!\n";
				return false;
			}
		}
	}
	return true;
}

bool checkInvalidChars(const std::string& expr) {
	for (char c : expr) {
		if (c != ' ' && 
			c != '+' && 
			c != '-' && 
			c != '*' && 
			c != '/' && 
			!std::isdigit(c)) {
				std::cerr << "Error: Contains invalid characters!\n";
				return false ;
		}
	}
	return true;
}

bool RPN::validateInput(const std::string& expr) {
	
	if (expr.empty())
		return false;
	if (!checkInvalidChars(expr) || !checkDoubleChars(expr) || !checkSpaces(expr))  {
		return false;
	}
	return true;
}

std::string RPN::removeSpaces(const std::string& expr) {
	std::string newExpr;
	for (char c : expr) {
		if (!std::isspace(c))
			newExpr.push_back(c);
	}
	// std::cout << newExpr << "\n";
	return newExpr;
}


// --Exceptions-- //


