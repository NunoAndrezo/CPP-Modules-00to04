#include "../inc/files_handler.hpp"

static void	copying_and_correcting(std::ifstream *input, std::ofstream *output);

void	handle_files(char **av, Helper *helper)
{
	std::ofstream	file;
	
	std::ifstream input(av[1], std::ios_base::binary); // av[1] == file que vamos abrir
	if (!input.is_open())
	{
		std::cerr << "Error:" << av[1] << "does not exist\n";
		exit(1);
	}
	std::ofstream output("copy.txt", std::ios::binary);
	if (!output.is_open())
	{
		std::cerr << "Error: Could not create copy.txt\n";
		exit(1);
	}
	if (!input || !output)
	{
		std::cerr << "Error opening files\n";
		exit(1);
	}
	copying_and_correcting(&input, &output);
	(void)helper;
}

static void	copying_and_correcting(std::ifstream *input, std::ofstream *output)
{
	char	c;

	while ((*input).get(c))
	{
		(*output).put(c);
	}
}
