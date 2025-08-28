#include "../inc/Zombie.hpp"

Zombie::Zombie()
{
	this->name = "";
}

Zombie::Zombie(const std::string &name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " is dead :(" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << ": Bonjour! I want to eat Braiii!11!inz!" << std::endl;
}

void	Zombie::setName(const std::string &name)
{
	this->name = name;
}