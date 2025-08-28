#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
: weapon(weapon) // must use initializer list for reference.
{
	this->name = name;
}

HumanA::~HumanA() {}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}