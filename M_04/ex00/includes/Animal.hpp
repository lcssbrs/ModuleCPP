#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(Animal &cpy);
		~Animal();
		Animal & operator=(Animal &ope);

		std::string	Animal::getType(void);
		virtual void		makeSound(void);

	protected:
		std::string type;
};

#endif
