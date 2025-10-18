#include "../inc/Animal.hpp"

Animal::Animal(void) : brain(new Brain())
{
	this->type = "Alien";
	std::cout << "Animal -> Default Constructor\n";
}

Animal::Animal(std::string type) : type(type), brain(new Brain()){
	//this->type = type; is the same as type(type);
	std::cout << "Animal -> Default Constructor called, with type already predefined. " << this->type << " was created\n";
}

Animal::Animal(const Animal &other) : type(other.type), brain(new Brain(*other.brain))
{
	this->type = other.type;
	std::cout << "Animal -> Copy Constructor\n";
}

Animal &Animal::operator=(const Animal &other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain(*other.brain);
	std::cout << "Animal -> Copy assignment operator\n";
	return (*this);
}

Animal::~Animal(void)
{
	delete this->brain;
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

void Animal::printIdeas(void) const {std::cout << "DEBUG: brain ptr = " << this->brain << std::endl; this->brain->printIdeas();}

void Animal::setIdea(std::string idea){this->brain->setIdeas(idea);}