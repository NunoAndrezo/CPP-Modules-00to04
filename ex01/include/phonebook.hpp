#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
class	PhoneBook
{
private:
	Contact	contact_list[8]; //dynamic is forbiden, so no malloc
	int		index;
};

#endif