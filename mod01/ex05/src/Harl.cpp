#include "../inc/Harl.hpp"

void	Harl::complain(std::string level)
{
	std::string		levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlFunction	funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int				i;

	i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
		{
			(this->*funcs[i])();
			return ;
		}
		i++;
	}
	std::cout << "Please write the following in the CLI ./<executable> <ERROR or INFO or WARNING or DEBUG>" << std::endl;
}
