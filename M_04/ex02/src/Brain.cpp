#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain Constructor called" << std::endl;
}

Brain::Brain(const Brain & cpy)
{
	std::cout << "Default Brain Copy called" << std::endl;
	*this = cpy;
}

Brain & Brain::operator=(const Brain & ope)
{
	std::cout << "Default Brain operator called" << std::endl;
	int i = -1;
	while (++i < 100)
		this->ideas[i] = ope.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Default Brain destructor called" << std::endl;
}

std::string* Brain::getIdeas(void)
{
	return this->ideas;
}

