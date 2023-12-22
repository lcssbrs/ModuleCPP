#include <iostream>
#include "HumanA.hpp"

class HumanB
{
	public:
				HumanB(std::string newName);
				~HumanB();
		void	attack(void);
		void	setWeapon(Weapon &newWeapon);

	private:
		Weapon *human_weapon;
		std::string name;
};
