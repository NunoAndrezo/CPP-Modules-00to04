#include "../inc/Fixed.hpp"

Fixed::Fixed() : nr_fixed_point(0)
{
	std::cout << "Default constructor called \n";
}

Fixed::Fixed(const Fixed &other) : nr_fixed_point(other.nr_fixed_point)
{
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator = (const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other) // protect against self-assignment
		nr_fixed_point = other.nr_fixed_point;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->nr_fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->nr_fixed_point = raw;
}

const int	Fixed::nr_fractionl_bits = 8;

/*
$> ./a.out
Default constructor called
Copy constructor called
Copy assignment operator called // <-- This line may be missing depending on your implementation
getRawBits member function called
Default constructor called
Copy assignment operator called
getRawBits member function called
getRawBits member function called
0
getRawBits member function called
0
getRawBits member function called
0
Destructor called
Destructor called
Destructor called
$>
 */