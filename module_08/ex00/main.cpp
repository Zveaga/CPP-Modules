/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/10/29 17:20:18 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"


int main(void)
{	
	std::cout << "\n========TEST========\n\n";
	std::vector<int> myContainerVector = {1, 2, 3, 4, 5};
	std::array<int, 5> myContainerArray = {1, 2, 3, 4, 5};
	int toSearch = 1;
	
	try
	{
		auto it1 = easyfind(myContainerVector, toSearch);
		auto it2 = easyfind(myContainerArray, toSearch);
		std::cout << "Integer found: " << *it1 << "\n";
		std::cout << "Integer found: " << *it2 << "\n";
	}
	catch (const std::out_of_range &e)
	{
		std::cerr << e.what() << "\n";
	}
	std::cout << "\n========END========\n";
	return (0);
}
