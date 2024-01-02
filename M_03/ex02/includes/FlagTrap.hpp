#include "../includes/ClapTrap.hpp"

class FlagTrap: public ClapTrap
{
	public:
			FlagTrap();
			FlagTrap(std::string newName);
			FlagTrap(FlagTrap &newClap);
			FlagTrap & operator=(FlagTrap &other);
			~FlagTrap();
			void highFivesGuys(void);
	private:

};
