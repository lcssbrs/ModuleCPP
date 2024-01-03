#include "../includes/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal & cpy)
{
	std::cout << "Animal default copy constructor called" <<std::endl;
	*this = cpy;
}

Animal & Animal::operator=(Animal & ope)
{
	std::cout << "Animal default operator called" <<std::endl;
	this->type = ope.getType();
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" <<std::endl;
}

std::string	Animal::getType(void)
{
	return this->type;
}

void	Animal::makeSound(void)
{
	
}
