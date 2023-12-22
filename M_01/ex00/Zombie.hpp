#include <iostream>

class Zombie
{
	public:
		void	announce(void);
		Zombie(std::string name);
		~Zombie();
		std::string	get_name_zombie(void)const;
		void	set_name_zombie(std::string newName);

	private:
		std::string name;
};
