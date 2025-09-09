#include "../inc/Harl.hpp"

int	main(int ac, char **av)
{
	Harl harl_class;
	std::string string;
	if (ac == 2)
	{
		string = av[1];
		harl_class.complain(string);
	}
	else
	{
		std::cout << "Please write only 2 arguments ./<executable> <ERROR or INFO or WARNING or DEBUG>" << std::endl;
	}
	return (0);
}