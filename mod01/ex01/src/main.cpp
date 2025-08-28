#include "../inc/Zombie.hpp"

int main()
{
	int number_of_zombies;
	std::string name_for_zombies;
	Zombie *horde;

	std::cout << "Insert the Nr of Zombies you would like to create (Maximum nr. is 999999):" << std::endl;
	std::cin >> number_of_zombies;
	std::cout << "Now the names for the Zombies:" << std::endl;
	std::cin >> name_for_zombies;
	std::cout << "-> Making the Horde:" << std::endl;
	horde = zombieHorde(number_of_zombies, name_for_zombies);
	for (int i = 0; i < number_of_zombies; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
