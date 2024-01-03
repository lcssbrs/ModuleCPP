#include "../includes/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal & cpy)
{
	std::cout << "Animal default copy constructor called" <<std::endl;
	*this = cpy;
}

Animal & Animal::operator=(const Animal & ope)
{
	std::cout << "Animal default operator called" <<std::endl;
	this->type = ope.getType();
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" <<std::endl;
}

std::string	Animal::getType(void)const
{
	return this->type;
}

void	Animal::makeSound(void)const
{
	std::cout << "test\n";
}
