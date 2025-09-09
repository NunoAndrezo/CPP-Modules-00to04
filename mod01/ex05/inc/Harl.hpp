#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
#include <memory>

class Harl
{
	private:
		void	debug(void) {std::cout << "DEBUG: I added two extra meatballs into the pot, just to see if the sauce would thicken differently. Honestly, I love testing these little tweaks!" << std::endl; }
		void	info(void) {std::cout << "INFO: I cannot believe adding more sauce costs extra. You barely put enough sauce on my meatballs to begin with!\n"; }
		void	warning(void) {std::cout << "WARNING: I think I should get some free garlic bread. I’ve been eating your meatballs for years, and you just started cooking last week.\n"; }
		void	error(void) {std::cout << "ERROR: This sauce is cold! That’s unacceptable—I demand to see the chef immediately!\n"; } 

	public:
		void	complain(std::string level);
};

typedef void (Harl::*HarlFunction)();

#endif

/* The goal of this exercise is to use pointers to member functions. This is not a
suggestion. Harl has to complain without using a forest of if/else if/else. He doesn’t
think twice! */