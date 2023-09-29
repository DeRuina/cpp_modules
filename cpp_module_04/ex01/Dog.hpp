#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal 
{
    private:
        Brain *brain;

    protected:
        std::string type;

    public:
        Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &src);
        ~Dog();

        void makeSound(void) const;
        std::string getType(void) const;
        Brain &getBrain(void);
};


#endif