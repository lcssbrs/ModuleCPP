#include "../includes/Harl.hpp"

Harl::Harl(std::string level)
{
	complain(level);
}
Harl::~Harl()
{

}
void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}


void	Harl::complain(std::string level)
{
	void (Harl::*function[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string allstr[4] = {"debug", "info", "warning", "error"};
	int i = 0;
	while (i < 4)
	{
		if (allstr[i].compare(level) == 0)
		{
			(this->*function[i])();
			return;
		}
		i++;
	}
	std::cout << "none level for Harl" << std::endl;
}
