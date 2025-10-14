#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

struct WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal& operator=(const WrongAnimal &other);
		~WrongAnimal();

		void		makeSound();
		std::string	getType();
};

#endif