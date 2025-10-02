#include "../inc/ClapTrap.hpp"

std::string getName(void);

ClapTrap::ClapTrap(std::string Name)
{
	this->name = name;
	std::cout << "Constructor was called\n";
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Deconstructor was called\n";
}

ClapTrap::ClapTrap(void)
{
	std::cout << "Constructor was called\n";
}

void attack(const std::string &target) // cost 1 energy
{
	std::cout << "ClapTrap " << getName() << "attacks <target>, causing <damage> points of damage!\n";
}

void beRepaired(unsigned int amount)
{

}

void takeDamage(unsigned int amount) // cost 1 energy
{

}

std::string ClapTrap::getName(void)
{
	return (this->name);
}