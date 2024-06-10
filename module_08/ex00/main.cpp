/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/06/10 12:33:35 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"


int main(void)
{	
	std::cout << "\n========TEST========\n\n";
	std::vector<int> myContainer = {1, 2, 3, 4, 5};
	int toSearch = 1;
	
	try
	{
		typename std::vector<int>::const_iterator it = easyfind(myContainer, toSearch);
		std::cout << "Integer found: " << *it << "\n";
	}
	catch (const std::out_of_range &e)
	{
		std::cerr << e.what() << "\n";
	}
	std::cout << "\n========END========\n";
	return (0);
}
