#include "../includes/Scavtrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default Scav constructor called" << std::endl;
	this->name = "newName";
	this->energy_point = 50;
	this->attack_damage = 20;
	this->hitPoint = 100;
}
ScavTrap::ScavTrap(std::string newName)
{
	std::cout << "Scav Constructor called" << std::endl;
	this->name = newName;
	this->energy_point = 50;
	this->attack_damage = 20;
	this->hitPoint = 100;
}
ScavTrap::ScavTrap(ScavTrap &newClap) : ClapTrap()
{
	*this = newClap;
}

ScavTrap & ScavTrap::operator=(ScavTrap &other)
{
	this->name = other.getName();
	this->attack_damage = other.getAttack();
	this->energy_point = other.getEnergy();
	this->hitPoint = other.getHitPoint();
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor Scavtrap called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "GUARD MODE ACTIVATE" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "SCAV ATTACK" << std::endl;
	if (this->hitPoint <= 0)
	{
		std::cout << this->name << " is already dead" << std::endl;
		return ;
	}
	if (this->energy_point <= 0)
	{
		std::cout << this->name << " has no energy left" << std::endl;
		return ;
	}
	this->energy_point -= 1;
	std::cout << this->name << " attack " << target << " causing " << this->attack_damage << " amount of damage. He now has this much energy: " << this->energy_point << std::endl;
	std::cout << "SCAV ATTACK" << std::endl;
}
