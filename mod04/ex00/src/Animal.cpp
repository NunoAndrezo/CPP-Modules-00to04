#include "../inc/Animal.hpp"

Animal::Animal()
{
	this->type = "Alien";
	std::cout << "Animal -> Default Constructor\n";
}

Animal::Animal(const Animal &other)
{
	this->type = other.type;
	std::cout << "Animal -> Copy Constructor\n";
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Animal -> Copy assignment operator\n";
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal -> Default Destructor\n";
}

void Animal::makeSound()
{
	if (this->type == "Alien")
		std::cout << "👽 Alien says: *blrrrRzzZZZ-kreeeeeee!*" << std::endl;
	else if (this->type == "Dog")
		std::cout << "🐶 Dog says: Woof! Woof!" << std::endl;
	else if (this->type == "Cat")
		std::cout << "🐱 Cat says: Meow~" << std::endl;
	else
		std::cout << "There's no type for ?Animal?\n";
	return ;
}

std::string Animal::getType()
{
	std::cout << "getType was called on Animal\n";
	return (this->type);
}