#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain & cpy);
		Brain & operator=(const Brain &ope);
		~Brain();
		std::string *getIdeas(void);

	private:
		std::string ideas[100];
};

#endif
