#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

typedef std::string string;
class	Contact
{
public:
	string	_firstname;
	string	_lastname;
	string	_nickname;
	string	_darkest_secret;
	string	_phone_nbr;
	// a saved contact can't have empty fields
};

#endif