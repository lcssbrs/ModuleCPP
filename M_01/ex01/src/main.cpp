#include "../includes/Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name );

int main(int ac, char **ag)
{
	int nb;
	Zombie *fZombie;
	if (ac != 3)
	{
		std::cout << "Put an positive number and a name" << std::endl;
		return (1);
	}
	nb = atoi(ag[1]);
	if (nb <= 0)
	{
		std::cout << "Please enter a POSTIVE VALUE FIRST DUMBASS" << std::endl;
		return (1);
	}
	fZombie = zombieHorde(nb, (std::string)ag[2]);
	(void)fZombie;
}
