#include "../inc/Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *allocated_zombie = new Zombie(name);
	return (allocated_zombie);
}