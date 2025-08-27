#include "../inc/Zombie.hpp"

int main()
{
	Zombie *heap_zombie;

	heap_zombie = newZombie("Ze, o Zombie da Heap");
	heap_zombie->announce();
	randomChump("Manuel, o zombie da stack");
	delete heap_zombie;
	return (0);
}