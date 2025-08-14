#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact	contacts[8];
		int		count;
	
	public:
		PhoneBook();
		void addContact();
		void searchContacts() const;
	};

#endif