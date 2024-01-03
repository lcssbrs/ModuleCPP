#ifndef CAT_HPP
#define CAT_HPP

#include "Dog.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat &cpy);
		Cat & operator=(const Cat & ope);
		~Cat();

		void makeSound(void) const;
};

#endif

