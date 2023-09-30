#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "UnWanted.hpp"

class Character : public ICharacter
{
    private:
	      std::string name;
	      AMateria *inventory[4];
	      UnWanted *leftBehind;

    public:
	      Character(std::string name);
	      Character(const Character &copy);
        Character &operator=(const Character &src);
        virtual ~Character();

	      std::string const &getName() const;
	      void equip(AMateria *m);
	      void unequip(int idx);
	      void use(int idx, ICharacter &target);

	      const AMateria *getItem(int idx) const;
        void	castAway(AMateria *outcast);


};

#endif