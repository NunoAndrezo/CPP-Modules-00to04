#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	this->name = name;
	std::cout << "Constructor was called\n";
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Default Destructor was called\n";
}

ClapTrap::ClapTrap(void)
{
	std::cout << "Default Constructor was called\n";
}
std::string	ClapTrap::getName(void)
{
	return (this->name);
}
int	ClapTrap::getHitPoints(void){return (this->hit_points);}

int	ClapTrap::getAttackDamage(void){return (this->attack_damage);}

int	ClapTrap::getEnergyPoints(void){return (this->energy_points);}

void ClapTrap::attack(const std::string &target) // cost 1 energy
{
	if(this->energy_points <= 0)
		{std::cout << "Not enough EP, you feel tired, so you take a nap...\n"; return;}
	if(this->hit_points <= 0)
		{std::cout << "Not enough HP, you fall to the ground and bleed out... You are dead\n"; return;}
	std::cout << this->getName() << "attacks" << target << ", inflicting "<< this->getAttackDamage() << "points of damage!\n";
	this->energy_points--;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->energy_points <= 0)
		{std::cout << "Not enough EP, you feel tired, so you take a nap...\n"; return;}
	if(this->hit_points <= 0)
		{std::cout << "Not enough HP, you fall to the ground and bleed out... You are dead\n"; return;}
	std::cout << "ClapTrap " << this->getName() << "repairs itself, regaining "<< amount << " hit points!\n";
	this->energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName() << "takes "<< amount << " hit points! It's not very effective...\n";
}
