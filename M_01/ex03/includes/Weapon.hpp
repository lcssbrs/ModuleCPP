#include <iostream>

class Weapon
{
	public:
					Weapon(std::string name);
					Weapon();
					~Weapon();
		const std::string	getType(void)const;
		void 		setType(std::string name);
	private:
		std::string type;
};
