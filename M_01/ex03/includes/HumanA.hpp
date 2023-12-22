#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:
				HumanA(std::string newName, Weapon &newWeapon);
				~HumanA();
		void	attack(void);

	private:
		Weapon *human_weapon;
		std::string name;
};
