#ifndef CAT_HPP
#define CAT_HPP

#include "Dog.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(Cat &cpy);
		Cat & operator=(Cat & ope);
		~Cat();

		virtual void makeSound(void);
};

#endif

