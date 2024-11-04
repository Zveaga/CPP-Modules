/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/11/04 13:38:14 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"

int main(int argc, char **argv)
{	
	std::cout << "\n=================START=================\n";
	if (argc < 2) {
		std::cerr << "ERROR: Program must be ran with 1 argument!\n";
		std::exit(EXIT_FAILURE);
	}
	std::string input = argv[1];
	PmergeMe alg;
	std::vector<int> vec = alg.createContainer<std::vector<int>>(input);
	std::list<int> list = alg.createContainer<std::list<int>>(input);
	
	std::cout << "\n--------------VECTOR--------------\n\n";
	
	alg.printContainer(vec, "before");
	auto start = std::chrono::high_resolution_clock::now();
	std::vector<int> sortedArray = alg.sortVec(vec);
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> durationVec = end - start;
	alg.printContainer(sortedArray, "after");
	
	std::cout << "\n---------------LIST---------------\n\n";
	alg.printContainer(list, "before");
	start = std::chrono::high_resolution_clock::now();
	std::list<int> sortedList = alg.sortList(list);
	end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> durationList = end - start;
	alg.printContainer(sortedList, "after");


	
	std::cout << "\n-------------DURATION-------------\n\n";
	alg.printDuration(durationVec, "vector", vec.size());
	alg.printDuration(durationList, "list", list.size());
	
	std::cout << "\n==================END===================\n";
	return (0);
}
