#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "../inc/Brain.hpp"

struct Animal
{
	protected:
		std::string type;
		Brain *brain;
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &other);
		Animal& operator=(const Animal &other);
		~Animal(void);

		void		makeSound();
		std::string	getType();
		void setIdea(std::string idea);
		void printIdeas(void) const;
};

#endif