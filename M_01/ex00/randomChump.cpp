#include "Zombie.hpp"

void randomChump(std::string names)
{
	Zombie newZombie (names);

	newZombie.announce();
}
