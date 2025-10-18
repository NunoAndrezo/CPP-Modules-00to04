#include "../inc/Brain.hpp"

Brain::Brain(void) : i(0) {
	int	j = -1;
	std::cout << "Brain -> Default Constructor\n";
	while (++j < 100)
		this->ideas[j] = "";
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain -> Copy Constructor\n";
	for (int j = 0; j < 100; j++)
	{
		this->ideas[j] = other.ideas[j];
	}
}

Brain &Brain::operator=(const Brain &other) {
		std::cout << "Brain -> Copy Operator\n";
	if (this != &other)
	{
		int	j = -1;
		while (++j < 100)
			this->ideas[j] = other.ideas[j];
	}
	return (*this);
}

Brain::~Brain(void) {
	std::cout << "Brain -> The brain was completely smashed, now s/he's dumb\n";
}

void Brain::printIdeas(void) const {
	for (int j = 0; j < 100; j++)
	{
		if (ideas[j].empty() == false)
		{
			std::cout << "\033[1;32mIdea " << j << ":\033[0m ";
			std::cout << "\033[1;36m"  << ideas[j] << "\033[0m\n";
		}
		else
			break;
	}
}

void Brain::setIdeas(std::string idea)
{
	if (this->i == 100)
	{
		std::cout << "Animal is full of ideas, his brain is going to explode\n";
		return;
	}
	if (idea.empty())
		return;
	this->ideas[this->i++] = idea;
}
