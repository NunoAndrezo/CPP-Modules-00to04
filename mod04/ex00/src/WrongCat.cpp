#include "../inc/WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat -> Default Constructor\n";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	this->type = other.type;
	std::cout << "WrongCat -> Copy Constructor\n";
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat -> Copy assignment operator\n";
	if (this != &other)
	{
		WrongAnimal::operator=(other);
		this->type = other.type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat -> Default Destructor\n";
}
