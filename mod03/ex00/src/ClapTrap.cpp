#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 2;
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
	std::cout << this->getName() << " has: " << this->getEnergyPoints() << " EP.\n";
	if(this->energy_points <= 0)
		{std::cout << "Not enough EP, you feel tired, so you take a nap...\n"; exit(0);}
	if(this->hit_points <= 0)
		{std::cout << "Not enough HP, you fall to the ground and bleed out... You are dead\n"; exit(0);}
	std::cout << "Used 1 EP to attack!\n";
	std::cout << this->getName() << " attacks " << target << ", inflicting "<< this->getAttackDamage() << " point/s of damage!\n";
	this->energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points <= 0)
		return (std::cout << "ClapTrap " << this->getName() << " is already dead\n", (void)amount);
	if (amount > this->hit_points)
		this->hit_points = 0;
	std::cout << "ClapTrap " << this->getName() << " loses "<< amount << " HP! It's not very effective...\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->getName() << " has: " << this->getEnergyPoints() << " EP.\n";
	if(this->energy_points <= 0)
		{std::cout << "Not enough EP, you feel tired, so you take a nap...\n"; exit(0);}
	if(this->hit_points <= 0)
		{std::cout << "Not enough HP, you fall to the ground and bleed out... You are dead\n"; exit(0);}
	std::cout << "ClapTrap " << this->getName() << " uses repair. And was able to regaining "<< amount << " HP!\n";
	std::cout << this->getName() << " used 1 EP\n";
	this->energy_points--;
}
