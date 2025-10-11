#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "../inc/Animal.hpp"

struct Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &other);
		Cat& operator=(const Cat &other);
		~Cat();
};

#endif