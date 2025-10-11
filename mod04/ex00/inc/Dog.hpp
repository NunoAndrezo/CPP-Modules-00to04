#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "../inc/Animal.hpp"

struct Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &other);
		Dog& operator=(const Dog &other);
		~Dog();
};

#endif