#include "../inc/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat -> Default Constructor\n";
}

Cat::Cat(const Cat &other) : Animal(other)
{
	this->type = other.type;
	std::cout << "Cat -> Copy Constructor\n";
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat -> Copy assignment operator\n";
	if (this != &other)
	{
		Animal::operator=(other);
		this->type = other.type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat -> Default Destructor\n";
}
