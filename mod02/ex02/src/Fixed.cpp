#include "../inc/Fixed.hpp"

// -------------------- Constructors / Destructor --------------------
Fixed::Fixed() : nr_fixed_point(0) {}

Fixed::Fixed(const Fixed &other) : nr_fixed_point(other.nr_fixed_point) {}

Fixed &Fixed::operator=(const Fixed &other) {
    if (this != &other)
        nr_fixed_point = other.nr_fixed_point;
    return *this;
}

Fixed::~Fixed() {}

Fixed::Fixed(const int val) {
    nr_fixed_point = val << nr_fractional_bits;
}

Fixed::Fixed(const float val) {
    nr_fixed_point = static_cast<int>(roundf(val * (1 << nr_fractional_bits)));
}

// -------------------- Member functions --------------------
int Fixed::getRawBits(void) const { return nr_fixed_point; }
void Fixed::setRawBits(int const raw) { nr_fixed_point = raw; }
float Fixed::toFloat(void) const { return static_cast<float>(nr_fixed_point) / (1 << nr_fractional_bits); }
int Fixed::toInt(void) const { return nr_fixed_point >> nr_fractional_bits; }

// -------------------- Comparison operators (if style) --------------------
bool Fixed::operator>(const Fixed &other) const { if (nr_fixed_point > other.nr_fixed_point) return true; return false; }
bool Fixed::operator<(const Fixed &other) const { if (nr_fixed_point < other.nr_fixed_point) return true; return false; }
bool Fixed::operator>=(const Fixed &other) const { if (nr_fixed_point >= other.nr_fixed_point) return true; return false; }
bool Fixed::operator<=(const Fixed &other) const { if (nr_fixed_point <= other.nr_fixed_point) return true; return false; }
bool Fixed::operator==(const Fixed &other) const { if (nr_fixed_point == other.nr_fixed_point) return true; return false; }
bool Fixed::operator!=(const Fixed &other) const { if (nr_fixed_point != other.nr_fixed_point) return true; return false; }

// -------------------- Arithmetic operators (integer-safe) --------------------
Fixed Fixed::operator+(const Fixed &other) const {
    Fixed result;
    result.setRawBits(nr_fixed_point + other.nr_fixed_point);
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const {
    Fixed result;
    result.setRawBits(nr_fixed_point - other.nr_fixed_point);
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const {
    Fixed result;
    long tmp = (long)nr_fixed_point * (long)other.nr_fixed_point;
    result.setRawBits(tmp >> nr_fractional_bits);
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const {
    Fixed result;
    long tmp = ((long)nr_fixed_point << nr_fractional_bits) / other.nr_fixed_point;
    result.setRawBits(tmp);
    return result;
}

// -------------------- Increment / Decrement --------------------
Fixed &Fixed::operator++() { nr_fixed_point++; return *this; }       // pre-increment
Fixed Fixed::operator++(int) { Fixed tmp(*this); nr_fixed_point++; return tmp; } // post-increment
Fixed &Fixed::operator--() { nr_fixed_point--; return *this; }       // pre-decrement
Fixed Fixed::operator--(int) { Fixed tmp(*this); nr_fixed_point--; return tmp; } // post-decrement

// -------------------- Static min/max --------------------
Fixed &Fixed::min(Fixed &a, Fixed &b) { if (a < b) return a; return b; }
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) { if (a < b) return a; return b; }
Fixed &Fixed::max(Fixed &a, Fixed &b) { if (a > b) return a; return b; }
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) { if (a > b) return a; return b; }

// -------------------- Output operator --------------------
std::ostream &operator<<(std::ostream &os, const Fixed &f) {
    os << f.toFloat();
    return os;
}
