#include "../includes/Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->catBrain = new Brain();
}

Cat::Cat(const Cat & cpy) : Animal()
{
	std::cout << "Cat default copy called" << std::endl;
	*this = cpy;
}

Cat & Cat::operator=(const Cat &ope)
{
	std::cout << "Cat default operator called" << std::endl;
	this->type = ope.getType();
	return *this;
}

Cat::~Cat()
{
	delete catBrain;
	std::cout << "Cat default destructor called" << std::endl;
}
void	Cat::makeSound(void) const
{
	std::cout << "Cat is Meowing" << std::endl;
}
