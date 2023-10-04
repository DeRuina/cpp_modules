
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
  Animal *AnimalArray[6];

  for (int i = 0; i < 6; i++)
  {
    if (i % 2 == 0)
      AnimalArray[i] = new Dog();
    else
      AnimalArray[i] = new Cat();
  }

  std::cout << "\nDeep copy test!" << std::endl;
	Cat cat;
	cat.getBrain().setIdea(0, "I LOVE TUNA");
	Cat copyCat(cat);
	copyCat.getBrain().setIdea(0, "I LOVE SARDINS");
	Cat assignCat = cat;
	assignCat.getBrain().setIdea(0, "I HATE FISH");
	std::cout << "Cat 1: " << cat.getBrain().getIdea(0) << std::endl;
	std::cout << "Cat 2: " << copyCat.getBrain().getIdea(0) << std::endl;
	std::cout << "Cat 3: " << assignCat.getBrain().getIdea(0) << std::endl;
	std::cout << std::endl;

  for (int i = 0; i < 6; i++)
    delete AnimalArray[i];

  return (0);
}
