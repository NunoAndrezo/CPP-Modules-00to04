#include "../inc/Dog.hpp"


Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog -> Default Constructor\n";
}

Dog::Dog(const Dog &other) : Animal(other)
{
	this->type = other.type;
	std::cout << "Dog -> Copy Constructor\n";
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog -> Copy assignment operator\n";
	if (this != &other)
	{
		Animal::operator=(other);
		this->type = other.type;
	}
	return *this;
}


Dog::~Dog()
{
	std::cout << "Dog -> Default Destructor\n";
}
