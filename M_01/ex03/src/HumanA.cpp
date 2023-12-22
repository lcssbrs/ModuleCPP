#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon &newWeapon)
{
	this->name = newName;
	this->human_weapon = &newWeapon;
}
HumanA::~HumanA()
{

}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->human_weapon->getType() << std::endl;
}
