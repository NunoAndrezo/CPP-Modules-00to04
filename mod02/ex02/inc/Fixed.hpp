#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int nr_fixed_point;
	static const int nr_fractional_bits = 8;

public:
	// Orthodox Canonical Form
	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();

	// New constructors
	Fixed(const int val);
	Fixed(const float val);

	// Member functions
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	// Comparison operators (if style)
	bool operator>(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;

	// Arithmetic operators
	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;

	// Increment / Decrement
	Fixed &operator++();   // pre-increment
	Fixed operator++(int); // post-increment
	Fixed &operator--();   // pre-decrement
	Fixed operator--(int); // post-decrement

	// Static min/max
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
};

// Output operator
std::ostream &operator<<(std::ostream &os, const Fixed &f);

#endif
