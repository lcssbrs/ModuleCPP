#include "../includes/FlagTrap.hpp"

FlagTrap::FlagTrap()
{
	std::cout << "Default Flag constructor called" << std::endl;
	this->name = "newName";
	this->energy_point = 100;
	this->attack_damage = 30;
	this->hitPoint = 100;
}
FlagTrap::FlagTrap(std::string newName)
{
	std::cout << "Flag Constructor called" << std::endl;
	this->name = newName;
	this->energy_point = 100;
	this->attack_damage = 30;
	this->hitPoint = 100;
}
FlagTrap::FlagTrap(FlagTrap &newClap) : ClapTrap()
{
	*this = newClap;
}

FlagTrap & FlagTrap::operator=(FlagTrap &other)
{
	this->name = other.getName();
	this->attack_damage = other.getAttack();
	this->energy_point = other.getEnergy();
	this->hitPoint = other.getHitPoint();
	return (*this);
}

FlagTrap::~FlagTrap()
{
	std::cout << "Destructor Flagtrap called" << std::endl;
}

void FlagTrap::highFivesGuys(void)
{
	std::cout << "HIGH FIVE" << std::endl;
}
