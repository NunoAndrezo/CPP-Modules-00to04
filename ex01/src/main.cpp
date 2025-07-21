#include "phonebook.hpp"
#include "contact.hpp"

static void	get_user_input(string &input);

int	main(int ac, char **av)
{
	PhoneBook	phonebook;
	string		user_input;
	bool		running = true;

	user_input = av[0];
	if (ac != 1)
		return (std::cout << "Wrong number of arguments" << std::endl, 1);
	std::cout << "Welcome to your awesome PhoneBook 📱" << std::endl;
	std::cout << "It's so awesome it can only hold 8 contacts..." << std::endl;
	while (running)
	{
		user_input.clear();
		get_user_input(user_input);
		//if (correct_option())
		//else if ()
		//{
		//	running = 0;
		//	continue;
		//}
	}
	if (running)
	{
		//fazer para o ctrl D
	}
	return (0);
}

static void	get_user_input(string &input)
{
	std::cout << "Please write one of the following options:" << std::endl;
	std::cout << "ADD, SEARCH or EXIT" << std::endl;
	std::cin >> input;
}