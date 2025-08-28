#include <memory>
#include <string>
#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	std::ofstream file;
	if (ac == 4)
	{
		/* if (!check_arguments(ac, av))
			return (1); */
		std::ifstream in(av[1], std::ios_base::in); // av[1] == file que vamos abrir
	}
	else
		return (std::cout << "Wrong number of arguments!" << std::endl << "Correct example: ./<exec> <filename> <string to be replaced> <string to replace>" << std::endl, 1);
	if (file.is_open())
	{
		file.close();
	}
	return (0);
}