#include "../includes/ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
			ScavTrap(void);
			ScavTrap(std::string newName);
			ScavTrap(const ScavTrap &newClap);
			ScavTrap & operator=(const ScavTrap &other);
			~ScavTrap(void);
			void guardGate(void);
			void attack(const std::string& target);
};
