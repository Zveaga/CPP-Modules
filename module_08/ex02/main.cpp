/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/06/19 12:42:08 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{	
	std::cout << "\n========START========\n\n";
	MutantStack<int> mstack;
	int a = 4;
	mstack.push(1);
	mstack.push(2);
	mstack.push(3);
	mstack.push(a);
	// std::cout << mstack.empty();
	for (const auto nr : mstack.getStack())
		std::cout << nr << " ";
	// std::cout << mstack.getStack();
			
	std::cout << "\n--------------------------\n";

    
	std::cout << "\n========END========\n";
	return (0);
}
