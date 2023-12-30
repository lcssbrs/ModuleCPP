#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" <<std::endl;
	this->stock_value = 0;
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
