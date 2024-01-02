#include "../includes/FlagTrap.hpp"

int main (void)
{
	FlagTrap first("1test1");
	FlagTrap second("2test2");

	first.attack("2test2");
	second.takeDamage(first.getAttack());
	first.highFivesGuys();
}
