/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/11/01 20:32:32 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"

int main(int argc, char **argv)
{	
	(void) argv;
	std::cout << "\n============START============\n\n";
	if (argc < 2) {
		std::cerr << "ERROR: Program must be ran with 1 argument!\n";
		std::exit(EXIT_FAILURE);
	}
	
	PmergeMe alg;
	// std::vector<int> vec = {5, 2, 9, 1, 5, 6};
    std::vector<int> vec = alg.genRandNums(1000);
	
	std::cout << "\n----------UNSORTED----------\n\n";
	
	alg.printVec(vec);
	std::vector<int> sortedArray = alg.sortVec(vec);

	std::cout << "\n----------SORTED----------\n\n";
	alg.printVec(sortedArray);
    std::cout << std::endl;
	

	std::cout << "\n-----------------------------\n\n";
	std::cout << "\n=============END=============\n";
	return (0);
}
