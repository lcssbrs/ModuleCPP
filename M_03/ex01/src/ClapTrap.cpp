#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Clap Constructor by default called" << std::endl;
	this->name = "newName";
	this->hitPoint = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string newName)
{
	std::cout << "Clap Constructor called" << std::endl;
	this->name = newName;
	this->hitPoint = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap &newClap)
{
	*this = newClap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Clap Destructor called" << std::endl;
}

int ClapTrap::getAttack(void)const
{
	return (this->attack_damage);
}

int ClapTrap::getEnergy(void)const
{
	return (this->energy_point);
}

int ClapTrap::getHitPoint(void)const
{
	return (this->hitPoint);
}

std::string ClapTrap::getName(void)const
{
	return (this->name);
}

ClapTrap & ClapTrap:: operator=(ClapTrap &other)
{
	this->attack_damage = other.getAttack();
	this->energy_point = other.getEnergy();
	this->hitPoint = other.getHitPoint();
	this->name = other.getName();
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
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
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint <= 0)
	{
		std::cout << this->name << " is already dead" << std::endl;
		return ;
	}
	this->hitPoint -= amount;
	std::cout << this->name << " was attack. He now has " << this->hitPoint << " lives left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
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
	this->hitPoint += amount;
	std::cout << this->name << " repaired himself. Now, he has " << this->energy_point << " energy point and " << this->hitPoint << " lives left."<< std::endl;
}
