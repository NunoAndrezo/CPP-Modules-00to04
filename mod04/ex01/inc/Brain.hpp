#pragma once

#include <iostream>

struct Brain
{
	private:
		std::string ideas[100];
		int	i;
	public:
		Brain();
		Brain(const Brain &other);
		Brain& operator=(const Brain &other);
		~Brain();

		void printIdeas(void)const;
		void setIdeas(std::string idea);
};