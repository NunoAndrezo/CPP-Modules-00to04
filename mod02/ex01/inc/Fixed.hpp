#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
class Fixed
{
	private:
		int					nr_fixed_point;
		static const int	nr_fractionl_bits;

	public:
		Fixed(); // constructor
		Fixed(const Fixed &other); //copy constructor
		Fixed &operator = (const Fixed &other); // copy assignment operator overload
		~Fixed(); // destructor
		int getRawBits(void) const; // const after the parentheses promises that the function will not modify the object
		void setRawBits(int const raw);

		Fixed(const int int_nr);
		Fixed(const float float_nr);
		float toFloat(void) const;
		int toInt(void) const;
	
};

#endif