#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" <<std::endl;
	this->stock_value = 0;
}

Fixed::Fixed(const int intValue)
{
    std::cout << "Int constructor called" << std::endl;
    this->stock_value = intValue << fraction_bits;
}

// Nouveau constructeur pour la conversion de flottant
Fixed::Fixed(const float floatValue)
{
    std::cout << "Float constructor called" << std::endl;
    this->stock_value = static_cast<int>(roundf(floatValue * (1 << fraction_bits)));
}


Fixed::Fixed(const Fixed &newFixed)
{
	std::cout << "Copy constructor called" <<std::endl;
	*this = newFixed;
}

Fixed::~Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed & Fixed:: operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" <<std::endl;
	if (this != &other)
		this->stock_value = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
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
