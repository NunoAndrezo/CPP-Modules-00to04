#include "Fixed.hpp"
#include <iostream>
#include <cmath>

// Default constructor
Fixed::Fixed() : nr_fixed_point(0)
{
	std::cout << "Default constructor called\n";
}

// Copy constructor
Fixed::Fixed(const Fixed &other) : nr_fixed_point(other.nr_fixed_point)
{
	std::cout << "Copy constructor called\n";
}

// Copy assignment operator
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		nr_fixed_point = other.nr_fixed_point;
	return *this;
}

// Destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

// Constructor from int
Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called\n";
	nr_fixed_point = val << nr_fractional_bits; // shift left 8 bits
}

// Constructor from float
Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called\n";
	nr_fixed_point = static_cast<int>(roundf(val * (1 << nr_fractional_bits)));
}

// Getter
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return nr_fixed_point;
}

// Setter
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	nr_fixed_point = raw;
}

// Convert to float
float Fixed::toFloat(void) const
{
	return static_cast<float>(nr_fixed_point) / (1 << nr_fractional_bits);
}

// Convert to int
int Fixed::toInt(void) const
{
	return nr_fixed_point >> nr_fractional_bits;
}

// Operator <<
std::ostream &operator<<(std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return os;
}
