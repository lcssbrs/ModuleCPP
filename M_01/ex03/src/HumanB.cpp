#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string newName)
{
	this->name = newName;
	this->human_weapon = NULL;
}

HumanB::~HumanB(void)
{

}

void	HumanB::attack(void)
{
	if (this->human_weapon != NULL)
		std::cout << this->name << " attacks with his " << this->human_weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with his hands, he does not have any weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->human_weapon = &newWeapon;
}
