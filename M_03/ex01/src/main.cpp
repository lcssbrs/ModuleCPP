#include "../includes/Scavtrap.hpp"

int main (void)
{
	ScavTrap first("1test1");
	ScavTrap second("2test2");

	first.attack("2test2");
	second.takeDamage(first.getAttack());
	first.guardGate();
}
