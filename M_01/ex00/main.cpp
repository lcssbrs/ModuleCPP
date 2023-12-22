#include "Zombie.hpp"

void randomChump(std::string names);
Zombie* newZombie(std::string name);

int main(void)
{
	Zombie firstZombie("FOO");
	Zombie *secondZombie;

	firstZombie.announce();
	secondZombie = newZombie("BOSS");
	randomChump("TOM");
	delete secondZombie;
}
