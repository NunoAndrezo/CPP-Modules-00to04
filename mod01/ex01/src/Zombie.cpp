#include "../inc/Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << "is dead :(" << std::endl;
}

void	Zombie::announce(std::string name)
{
	std::cout << name << ": Bonjour! I want to eat Braiii!11!inz!" << std::endl;
}