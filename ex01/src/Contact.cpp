#include "../include/Contact.hpp"
#include <iostream>
#include <iomanip>

void Contact::setContact()
{
	std::cout << "First Name: ";
	while (firstName.size() == 0)
	{
		std::getline(std::cin, firstName);
		if (std::cin.eof())
		{
			std::cout << "\nCtrl+D caught, Exiting..." << std::endl;
			exit(0);
		}
	}
	std::cout << "Last Name: ";
	while (lastName.size() == 0)
	{
		std::getline(std::cin, lastName);
		if (std::cin.eof())
		{
			std::cout << "\nCtrl+D caught, Exiting..." << std::endl;
			exit(0);
		}
	}
	std::cout << "Nickname: ";
	while (nickName.size() == 0)
	{
		std::getline(std::cin, nickName);
		if (std::cin.eof())
		{
			std::cout << "\nCtrl+D caught, Exiting..." << std::endl;
			exit(0);
		}
	}
	std::cout << "Phone Number: ";
	while (phoneNumber.size() == 0)
	{
		std::getline(std::cin, phoneNumber);
		if (std::cin.eof())
		{
			std::cout << "\nCtrl+D caught, Exiting..." << std::endl;
			exit(0);
		}
	}
	std::cout << "Darkest Secret: ";
	while (darkestSecret.size() == 0)
	{
		std::getline(std::cin, darkestSecret);
		if (std::cin.eof())
		{
			std::cout << "\nCtrl+D caught, Exiting..." << std::endl;
			exit(0);
		}
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
	field = nickName;
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
	std::cout << "Nickname: " << nickName << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}