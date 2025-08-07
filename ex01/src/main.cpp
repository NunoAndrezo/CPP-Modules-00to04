#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"
#include <csignal>    // C++ version of signal.h
#include <cstring>    // for memset

static void	ignore_signal(void);
static void	get_user_input(std::string &input);

int	main(int ac, char **av)
{
	PhoneBook			phonebook;
	std::string			user_input;
	bool				running = true;

	(void)av;
	ignore_signal();
	if (ac != 1)
		return (std::cout << "Wrong number of arguments" << std::endl, 1);
	std::cout << "Welcome to your awesome PhoneBook 📱" << std::endl;
	std::cout << "It's so awesome it can only hold 8 contacts..." << std::endl;
	while (running)
	{
		user_input.clear();
		get_user_input(user_input);
		if (user_input == "ADD")
			phonebook.addContact();
		else if (user_input == "SEARCH")
			phonebook.searchContacts();
		else if (user_input == "EXIT")
			running = false;
		else
			std::cout << "Invalid Command. Try again (case sensitive)!";
	}
	std::cout << "Bye bye!" << std::endl;
	return (0);
}

static void	get_user_input(std::string &input)
{
	std::cout << "\nPlease write one of the following options:" << std::endl;
	std::cout << "ADD, SEARCH or EXIT" << std::endl;
	std::cout << "→ ";
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << "\nEoF reached, Exiting..." << std::endl;
		exit(0);
	}
}

static void	ignore_signal(void)
{
	struct sigaction	sa;

	std::memset(&sa, 0, sizeof(sa));
	// Set handler to ignore SIGINT
	sa.sa_handler = SIG_IGN;
	// Apply the signal action
	sigaction(SIGINT, &sa, NULL);
}