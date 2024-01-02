#include "../includes/ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
			ScavTrap();
			ScavTrap(std::string newName);
			ScavTrap(ScavTrap &newClap);
			ScavTrap & operator=(ScavTrap &other);
			~ScavTrap();
			void guardGate();
			void attack(const std::string& target);
	private:

};
