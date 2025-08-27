#include "../inc/Zombie.hpp"

int main()
{
	// std::string number_of_zombies;
	// std::string name_for_zombies;
	int	x;
	Zombie *horde;

	x = 3;
	horde = zombieHorde(x, "Muchachos");
	// std::cout << "Insert the Number of Zombies you would like to create:" << std::endl;
	// std::getline(std::cin, number_of_zombies);
	// std::cout << "Now the names for the Zombies:" << std::endl;
	// std::getline(std::cin, name_for_zombies);
	delete horde;
	return (0);
}