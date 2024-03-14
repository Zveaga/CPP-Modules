/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 15:14:36 by coxer         #+#    #+#                 */
/*   Updated: 2024/03/14 12:13:07 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cctype>
#include<cstring>

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 1);
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; j < std::strlen(argv[i]); j++)
			argv[i][j] = std::toupper(argv[i][j]);
		std::cout << argv[i];
	}
	std::cout << std::endl;
	return 0;
}
