#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

struct Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal &other);
		Animal& operator=(const Animal &other);
		~Animal();

		void		makeSound();
		std::string	getType();
};

#endif