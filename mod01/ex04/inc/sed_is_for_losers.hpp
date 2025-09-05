#ifndef SED_IS_FOR_LOSERS_HPP
#define SED_IS_FOR_LOSERS_HPP

#include <string>
#include <iostream>


class Helper
{
	public:
		std::string erase;
		std::string replace;
};

bool	parser(int ac, char **av, Helper *helper);

#endif