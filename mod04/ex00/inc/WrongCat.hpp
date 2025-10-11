#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "../inc/WrongAnimal.hpp"

struct WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &other);
		WrongCat& operator=(const WrongCat &other);
		~WrongCat();
};

#endif