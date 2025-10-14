#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal -> Default Constructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	this->type = other.type;
	std::cout << "WrongAnimal -> Copy Constructor\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "WrongAnimal -> Copy assignment operator\n";
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal -> Default Destructor\n";
}

void WrongAnimal::makeSound()
{
	if (this->type == "WrongCat")
		std::cout << "🙀🐮 (WrongCat) Cow says: MooOOoo!" << std::endl;
	else if (this->type == "WrongAnimal")
		std::cout << "❌ WrongAnimal makes an indescribable noise...\n";
	else
		std::cout << "No type on this ?WrongAnimal?\n";
	return ;
}

std::string WrongAnimal::getType()
{
	std::cout << "getType was called on WrongAnimal\n";
	return (this->type);
}
