#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <memory>
#include <string>
#include "../inc/Weapon.hpp"
class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string name);
		~HumanB();

		void attack();
		void setWeapon(Weapon &weapon);
};

#endif