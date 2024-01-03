#include "../includes/Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat & cpy) : Animal()
{
	std::cout << "Cat default copy called" << std::endl;
	*this = cpy;
}

Cat & Cat::operator=(Cat &ope)
{
	std::cout << "Cat default operator called" << std::endl;
	this->type = ope.getType();
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
}
void	Cat::makeSound(void)
{
	std::cout << "Cat is Meowing" << std::endl;
}
