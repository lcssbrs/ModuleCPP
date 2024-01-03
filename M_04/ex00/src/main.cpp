#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    const WrongAnimal* meta_test = new WrongAnimal();
    const WrongAnimal* i_test = new WrongCat();
    std::cout << i_test->getType() << " " << std::endl;
    i_test->makeSound();
    meta_test->makeSound();
    delete meta_test;
    delete i_test;
    return 0;
}
