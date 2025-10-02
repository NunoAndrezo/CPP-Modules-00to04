#include "../inc/ClapTrap.hpp"

int	main(int ac, std::string *av)
{
/*	ClapTrap	bot1("Maximillion Pegasus");
	ClapTrap	bot2("Seto Kaiba");*/
	if (ac != 3)
	{
		std::cerr << "Please use the following example or similar:\n";
		std::cerr << "./<program name> <Player 1> <Player 2> (Player2 is going to take the beating)\n";
		std::cerr << "Thank you\n";
		return (1);
	}
	ClapTrap	bot1(av[1]);
	ClapTrap	bot2(av[2]);

	bot1.attack(bot2.getName());
	bot2.takeDamage(2);
	bot2.beRepaired(1);
	bot2.
	return (0);
}