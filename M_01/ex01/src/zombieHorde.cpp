#include "../includes/Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
	Zombie *aZombie[N];
	int i = 0;
	while (i < N)
	{
		aZombie[i] = new Zombie(name);
		aZombie[i]->announce();
		i++;
	}
	return (aZombie[0]);
}

