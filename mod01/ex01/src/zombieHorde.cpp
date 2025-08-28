#include "../inc/Zombie.hpp"

Zombie *zombieHorde(int N, std::string &name)
{
	if (N <= 0 || N > 1000000)
		return (NULL);
	Zombie	*horde;

	horde = new Zombie[N]; // allocate N zombie:zombie
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
