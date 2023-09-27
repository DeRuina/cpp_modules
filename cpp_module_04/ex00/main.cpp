#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main(void)
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); 
j->makeSound();
meta->makeSound();

const WrongAnimal* k = new WrongCat();
std::cout << k->getType() << " " << std::endl;
k->makeSound();

return (0);
}