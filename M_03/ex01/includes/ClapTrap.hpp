#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string newName);
		ClapTrap(ClapTrap &newClap);
		~ClapTrap();
		ClapTrap & operator=(ClapTrap &other);
		int getAttack(void)const;
		int getEnergy(void)const;
		int getHitPoint(void)const;
		std::string getName(void)const;
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		std::string name;
		int hitPoint;
		int energy_point;
		int attack_damage;
};
