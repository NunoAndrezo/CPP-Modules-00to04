#include "PhoneBook.hpp"
#include <iostream>
#include <limits>
#include <iomanip>

PhoneBook::PhoneBook() : count(0) {}

void PhoneBook::addContact()
{
	int index = count;

	if (count >= 8)
	{
		index = count % 8; // overwrite oldest
	}

	contacts[index].setContact();

	if (contacts[index].isEmpty())
	{
		std::cout << "Empty contact not saved!" << std::endl;
		return;
	}

	count++;
	std::cout << "Contact saved successfully!" << std::endl;
}

void PhoneBook::searchContacts() const
{
	if (count == 0)
	{
		std::cout << "No contacts saved." << std::endl;
		return;
	}

	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;

	int displayed = 0;
	while (displayed < 8 && displayed < count)
	{
		contacts[displayed].displaySummary(displayed);
		displayed++;
	}

	std::cout << "Choose contact index: ";
	int index;
	std::cin >> index;

	if (std::cin.fail() || index < 0 || index >= displayed)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid index." << std::endl;
		return;
	}
	std::cin.ignore(); // clear newline
	contacts[index].displayFull();
}