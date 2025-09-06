#include "../inc/sed_is_for_losers.hpp"

bool	parser(int ac, char **av, Helper *helper)
{
	if (ac != 4)
		return (std::cout << "Wrong number of arguments!" << std::endl << "Correct example: ./<exec> <filename> <string to be replaced> <string to replace>" << std::endl, false);
	if (!av[2] || !av[3])
		return (std::cout << " Something is wrong, use the Correct example: ./<exec> <filename> <string to be replaced> <string to replace>" << std::endl, false);
	else if (!av[3][0] || !av[2][0] )
		return (std::cout << "Nothing will be replaced, since the argument/s is/are empty: <"">, exiting...\n", false);
	helper->erase = av[2];
	helper->replace = av[3];
	return (true);
}