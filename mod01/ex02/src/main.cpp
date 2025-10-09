#include <memory>
#include <iostream>
#include <string>

int	main()
{
	std::string ola = "HI THIS IS BRAIN";
	std::string &stringREF = ola;
	// like this: std::string *stringPTR = &ola;
	// or:
	//also works, like in C language:
	std::string *stringPTR;
	stringPTR = &ola;

	//tests:

	// chang via pointer:
	//*stringPTR = "monkey";

	//chang via reference:
	//stringREF = "muchaho";

	//--end of tests--

	// ---- print addresses ----
	// All three lines below should show the SAME address
	std::cout << "Address of string variable:    " << &ola << std::endl;
	std::cout << "Address held by stringPTR:     " << stringPTR << std::endl;
	std::cout << "Address held by stringREF:     " << &stringREF << std::endl;

	// ---- print values ----
	std::cout << "Value of string variable:      " << ola << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}