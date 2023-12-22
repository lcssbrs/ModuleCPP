#include "../includes/Harl.hpp"


int main(int ac, char **ag)
{
	std::string level;
	if (ac != 2)
	{
		std::cout << "please respect my program, put an argument\n";
		return (1);
	}
	level = ag[1];
	Harl newHarl(level);
}
