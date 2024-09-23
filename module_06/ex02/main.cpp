/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/09/23 16:51:36 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	std::cout << "--------------POINTERS---------------\n\n";

    for (int i = 0; i < 10; ++i)
    {
        Base *ptr = generate();
        identify(ptr);
        delete ptr;
    }
	
	std::cout << "\n--------------REFERENCES--------------\n\n";

    for (int i = 0; i < 10; ++i)
    {
        Base *ptr = generate();
        identify(*ptr);
        delete ptr;
    }

	std::cout << "\n--------------TEST ERROR---------------\n\n";

    Base    *invalidInput = nullptr;
    std::cout << "Invalid input: ";
    identify(invalidInput);
    std::cout << "Invalid input: ";
    identify(*invalidInput);
	
	std::cout << "\n-----------------END------------------\n\n";
	
    return (0);
}