/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 15:14:02 by coxer         #+#    #+#                 */
/*   Updated: 2024/02/01 17:50:56 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<string>

int main(int argc, char **argv)
{
	std::string filename;
	std::string s1;
	std::string s2;

	if (argc != 4)
		return (std::cerr << "Program must have 3 arguments\n", 1);
	filename = argv[1];
	s1 = argv[2];
	if (s1.empty())
		return (std::cerr << "First argument cannot be empty\n", 1);		
	s2 = argv[3];
	std::fstream File; // construct the stream object
	File.open(filename, std::fstream::in); //open the file
	if (!File)
		return (std::cerr << "Error while opening the file\n", 1);
		
	std::fstream newFile;
	newFile.open("test.replace", std::fstream::out);
	if (!newFile)
		return (std::cerr << "Error while opening the file\n", 1);

	std::string line;
	while (std::getline(File, line))
	{
		std::size_t start = 0;
		while ((start = line.find(s1)) != std::string::npos)
		{

			//std::cout << start << std::endl;
			line.replace(start, s1.length(), s2);	// replace s1 with s2
			start += s2.length();
		}
		std::cout << line << std::endl;
	}
	File.close();
	newFile.close();
	return (0);
}
