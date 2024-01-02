#include "../includes/ClapTrap.hpp"

int main (void)
{
	ClapTrap first("1test1");
	ClapTrap second("2test2");

	first.attack("2test2");
	second.takeDamage(first.getAttack());
}
