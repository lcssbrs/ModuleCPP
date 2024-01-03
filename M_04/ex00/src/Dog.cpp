#include "../includes/Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog & cpy) : Animal()
{
	std::cout << "Dog default copy called" << std::endl;
	*this = cpy;
}

Dog & Dog::operator=(Dog &ope)
{
	std::cout << "Dog default operator called" << std::endl;
	this->type = ope.getType();
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}
void	Dog::makeSound(void)
{
	std::cout << "Dog is Barking" << std::endl;
}
