#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	this->stock_value = 0;
}

Fixed::Fixed(const int intValue)
{
    this->stock_value = intValue << fraction_bits;
}

// Nouveau constructeur pour la conversion de flottant
Fixed::Fixed(const float floatValue)
{
    this->stock_value = static_cast<int>(roundf(floatValue * (1 << fraction_bits)));
}


Fixed::Fixed(const Fixed &newFixed)
{
	*this = newFixed;
}

Fixed::~Fixed()
{

}

bool Fixed:: operator<(const Fixed &other)const
{
	if (this->stock_value < other.getRawBits())
		return (true);
	return (false);
}

bool Fixed:: operator>(const Fixed &other)const
{
	if (this->stock_value > other.getRawBits())
		return (true);
	return (false);
}

bool Fixed:: operator<=(const Fixed &other)const
{
	if (this->stock_value <= other.getRawBits())
		return (true);
	return (false);
}

bool Fixed:: operator>=(const Fixed &other)const
{
	if (this->stock_value >= other.getRawBits())
		return (true);
	return (false);
}

bool Fixed:: operator==(const Fixed &other)const
{
	if (this->stock_value == other.getRawBits())
		return (true);
	return (false);
}

bool Fixed:: operator!=(const Fixed &other)const
{
	if (this->stock_value != other.getRawBits())
		return (true);
	return (false);
}

Fixed & Fixed:: operator=(const Fixed &other)
{
	if (this != &other)
		this->stock_value = other.getRawBits();
	return (*this);
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed result;
    long long temp = static_cast<long long>(this->stock_value) * other.getRawBits();
    result.setRawBits(temp / (1 << fraction_bits));
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed result;
    long long temp = static_cast<long long>(this->stock_value) * (1 << fraction_bits);
    result.setRawBits(temp / other.getRawBits());
    return result;
}

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed result;
    result.setRawBits(this->stock_value + other.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed result;
    result.setRawBits(this->stock_value - other.getRawBits());
    return result;
}


Fixed & Fixed:: operator++(void)
{
	this->stock_value += 1;
	return (*this);
}

Fixed Fixed:: operator++(int)
{
	Fixed temp(*this);
	++(*this);
	return (temp);
}

Fixed & Fixed:: operator--(void)
{
	this->stock_value -= 1;
	return (*this);
}

Fixed Fixed:: operator--(int)
{
	Fixed temp(*this);
	this->stock_value -= 1;
	return (temp);
}

int Fixed::getRawBits(void)const
{
	return (this->stock_value);
}

void Fixed::setRawBits(int const raw)
{
	this->stock_value = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.getRawBits() / (float)(1 << fixed.fraction_bits);
    return out;
}

int		Fixed::toInt(void)const
{
	return this->stock_value >> fraction_bits;
}

float	Fixed::toFloat(void)const
{
	return static_cast<float>(this->stock_value) / (1 << fraction_bits);
}


Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}
