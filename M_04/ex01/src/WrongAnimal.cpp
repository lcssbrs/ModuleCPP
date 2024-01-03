#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & cpy)
{
	std::cout << "WrongAnimal default copy constructor called" <<std::endl;
	*this = cpy;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & ope)
{
	std::cout << "WrongAnimal default operator called" <<std::endl;
	this->type = ope.getType();
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called" <<std::endl;
}

std::string	WrongAnimal::getType(void)const
{
	return this->type;
}

void	WrongAnimal::makeSound(void)const
{
	std::cout << "test\n";
}
