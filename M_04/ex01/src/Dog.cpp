#include "../includes/Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->dogBrain = new Brain();
}

Dog::Dog(const Dog & cpy) : Animal()
{
	std::cout << "Dog default copy called" << std::endl;
	this->dogBrain = new Brain();
	*this = cpy;
}

Dog & Dog::operator=(const Dog &ope)
{
	std::cout << "Dog default operator called" << std::endl;
	this->type = ope.getType();
	*(this->dogBrain) = *(ope.dogBrain);
	return *this;
}

Dog::~Dog()
{
	delete dogBrain;
	std::cout << "Dog default destructor called" << std::endl;
}
void	Dog::makeSound(void) const
{
	std::cout << "Dog is Barking" << std::endl;
}
