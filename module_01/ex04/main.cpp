/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 15:14:02 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/23 17:10:07 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<string>

/**
 * Program takes 3 parameters
 * 1. A filename
 * 2. String1 -> will be replaced by String2
 * 3. String2 -> will replace String1
*/
int main(int argc, char **argv)
{
	std::string filename, s1, s2;

	if (argc != 4)
		return (std::cerr << "Program must have 3 arguments\n", 1);
	filename = argv[1];
	s1 = argv[2];
	if (s1.empty())
		return (std::cerr << "Second argument cannot be empty\n", 1);		
	s2 = argv[3];
	
	// construct the input stream object //
	std::ifstream File;
	File.open(filename);
	if (!File)
		return (std::cerr << "Error while opening the file\n", 1);
		
	// construct the output stream object //
	std::ofstream newFile;
	newFile.open("test.replace");
	if (!newFile)
		return (std::cerr << "Error while opening the file\n", File.close(), 1);

	std::string line;
	while (std::getline(File, line))
	{
		std::size_t start = 0;
		while ((start = line.find(s1)) != std::string::npos)
		{
			line.replace(start, s1.length(), s2);
			start += s2.length();
		}
		newFile << line << std::endl;
	}
	File.close();
	newFile.close();
	return (0);
}
