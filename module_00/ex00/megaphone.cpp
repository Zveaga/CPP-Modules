#include<iostream>
#include<cctype>
#include<cstring>

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (std::cout << "NO INPUT PROVIDED!" << std::endl, 1);
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; j < std::strlen(argv[i]); j++)
			argv[i][j] = std::toupper(argv[i][j]);
		std::cout << argv[i];
	}
	std::cout << std::endl;
	return 0;
}
