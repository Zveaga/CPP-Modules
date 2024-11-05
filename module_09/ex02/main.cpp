/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 19:27:02 by rares         #+#    #+#                 */
/*   Updated: 2024/11/05 16:39:06 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"

int main(int argc, char **argv)
{	
	std::cout << "\n=================START=================\n";
	if (argc < 2) {
		std::cerr << "ERROR: Program must be ran with more than 1 argument!\n";
		std::exit(EXIT_FAILURE);
	}
	std::vector<std::string> input;
	for (int i = 1; i < argc; i++) {
		input.push_back(std::string(argv[i]));
	}
	PmergeMe alg;
	alg.printContainer(input, "INPUT");
	try {
		alg.parseInput(input);
	} catch (const std::exception& e) {
		std::cout << "ERROR! Invalid input: " << e.what() << "\n";
		std::exit(1);
	}
	
	std::vector<int> vec = alg.createContainer<std::vector<int>>(input);
	std::list<int> list = alg.createContainer<std::list<int>>(input);
	
	std::cout << "\n--------------VECTOR--------------\n\n";
	
	alg.printContainer(vec, "BEFORE");
	auto start = std::chrono::high_resolution_clock::now();
	std::vector<int> sortedArray = alg.sortVec(vec);
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> durationVec = end - start;
	alg.printContainer(sortedArray, "AFTER");
	
	std::cout << "\n---------------LIST---------------\n\n";
	
	alg.printContainer(list, "BEFORE");
	start = std::chrono::high_resolution_clock::now();
	std::list<int> sortedList = alg.sortList(list);
	end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> durationList = end - start;
	alg.printContainer(sortedList, "AFTER");


	
	std::cout << "\n-------------DURATION-------------\n\n";
	alg.printDuration(durationVec, "vector", vec.size());
	alg.printDuration(durationList, "list", list.size());
	
	std::cout << "\n==================END===================\n";
	return (0);
}
