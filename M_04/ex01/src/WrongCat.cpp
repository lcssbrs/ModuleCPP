#include "../includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat & cpy) : WrongAnimal()
{
	std::cout << "WrongCat default copy called" << std::endl;
	*this = cpy;
}

WrongCat & WrongCat::operator=(const WrongCat &ope)
{
	std::cout << "WrongCat default operator called" << std::endl;
	this->type = ope.getType();
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
}
void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat is Meowing" << std::endl;
}
