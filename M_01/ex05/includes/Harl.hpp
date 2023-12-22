#include <iostream>

class Harl
{
	public:
				Harl(std::string level);
				~Harl();
		void	complain(std::string level);

	private:
		void	error(void);
		void	warning(void);
		void	info(void);
		void	debug(void);
};
