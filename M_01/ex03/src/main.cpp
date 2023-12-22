#include "../includes/HumanB.hpp"

int main()
{
	Weapon club("crude spike club");
	HumanA bob("bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	Weapon club1("crude spike club");
	HumanB jim("Jim");
	jim.setWeapon(club1);
	jim.attack();
	club1.setType("some other type of club");
	jim.attack();
}
