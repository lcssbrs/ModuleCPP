#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &cpy);
		virtual ~WrongAnimal();
		WrongAnimal & operator=(const WrongAnimal &ope);

		std::string	getType(void)const;
		void		makeSound(void)const;

	protected:
		std::string type;
};

#endif
