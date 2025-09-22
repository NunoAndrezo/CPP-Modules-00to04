#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath> // for roundf

class Fixed
{
	private:
		int nr_fixed_point; // raw fixed-point value
		static const int nr_fractional_bits = 8; // number of fractional bits

	public:
		// Orthodox Canonical Form
		Fixed(); // default constructor
		Fixed(const Fixed &other); // copy constructor
		Fixed &operator=(const Fixed &other); // copy assignment
		~Fixed(); // destructor

		// New constructors for ex01
		Fixed(const int val); // construct from int
		Fixed(const float val); // construct from float

		// Member functions
		int getRawBits(void) const; // getter
		void setRawBits(int const raw); // setter
		float toFloat(void) const; // convert to float
		int toInt(void) const; // convert to int
};

// Overload << for output
std::ostream &operator<<(std::ostream &os, const Fixed &f);

#endif

/* 10    	9	8   7   6  5  4  3 2 1 0
1024	512	256 128 64 32 16 8 4 2 1
1 		0	1   0   0  0  0  0 0 0 0

20 | 2	=0
10 | 2	=0
5  | 2	=1
2  | 2	=0
1  | 2  =1
0  | 2	=0 */