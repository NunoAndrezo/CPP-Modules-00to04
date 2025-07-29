#include "Contact.hpp"
#include <iostream>
#include <iomanip>

void Contact::setContact()
{
	std::cout << "First Name: ";
	std::getline(std::cin, firstName);
	std::cout << "Last Name: ";
	std::getline(std::cin, lastName);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone Number: ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkestSecret);

	if (std::cin.eof())
	{
		std::cout << "\nExiting..." << std::endl;
		exit(0);
	}
}

bool Contact::isEmpty() const
{
	if (firstName.empty())
		return true;
	return false;
}

void Contact::displaySummary(int index) const
{
	std::cout << std::setw(10) << index << "|";

	std::string field;

	// First name
	field = firstName;
	if (field.length() > 10)
	{
		std::cout << field.substr(0, 9) + "." << "|";
	}
	else
	{
		std::cout << std::setw(10) << field << "|";
	}

	// Last name
	field = lastName;
	if (field.length() > 10)
	{
		std::cout << field.substr(0, 9) + "." << "|";
	}
	else
	{
		std::cout << std::setw(10) << field << "|";
	}

	// Nickname
	field = nickname;
	if (field.length() > 10)
	{
		std::cout << field.substr(0, 9) + "." << "|";
	}
	else
	{
		std::cout << std::setw(10) << field << "|";
	}

	std::cout << std::endl;
}

void Contact::displayFull() const
{
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}