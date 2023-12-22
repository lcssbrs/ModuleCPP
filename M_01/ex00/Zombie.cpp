#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->set_name_zombie(name);
}

Zombie::~Zombie()
{
	std::cout << this->name << " destructor called" << std::endl;
}

std::string	Zombie::get_name_zombie(void)const
{
	return (this->name);
}

void	Zombie::set_name_zombie(std::string newName)
{
	this->name = newName;
}
void	Zombie::announce(void)
{
	std::cout << this->name;
	std::cout << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
