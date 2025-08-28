#include "../inc/HumanA.hpp"
#include "../inc/HumanB.hpp"
#include "../inc/Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA gyarados("Gyarados", club);
		gyarados.attack();
		club.setType("some other type of club");
		gyarados.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB pikachu("Pikachu");
		pikachu.setWeapon(club);
		pikachu.attack();
		club.setType("some other type of club");
		pikachu.attack();
	}
}