#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal 
{
    private:
        Brain *brain;

    protected:
        std::string type;

    public:
        Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &src);
        ~Cat();

        void makeSound(void) const;
        std::string getType(void) const;
        Brain &getBrain(void);
};



#endif