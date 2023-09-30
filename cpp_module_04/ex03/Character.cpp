#include "Character.hpp"

Character::Character(std::string name): name(name), leftBehind(NULL)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}
Character::Character(const Character &copy)
{
  this->name = copy.name;
  this->leftBehind = copy.leftBehind;
	for (int i = 0; i < 4; i++)
		inventory[i] = copy.getItem(i)->clone();
}
Character &Character::operator=(const Character &src)
{
	for (int i = 0; i < 4; i++)
	{
		delete inventory[i];
		inventory[i] = NULL;
	}
	for (int i = 0; i < 4; i++)
		inventory[i] = src.getItem(i)->clone();
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		delete inventory[i];
		inventory[i] = NULL;
	}
	delete leftBehind;
	leftBehind = NULL;
}
std::string const &Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria *m)
{
	if (m == NULL)
	{
		std::cout << "Invalid Materia" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == m)
		{
			std::cout << "Materia already exists, not equipped" << std::endl;
			return ;
		}
		else if (inventory[i] == NULL)
		{
			inventory[i] = m;
			std::cout << this->name << " equipped materia " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << this->name << " was unable to equip " << m->getType() << ", full inventory." << std::endl;
}
void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || !inventory[idx])
	{
		std::cout << "invalid" << std::endl;
		return;
	}
	castAway(inventory[idx]);
	std::cout << "Materia unequipped" << std::endl;
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3 || !inventory[idx])
	{
		std::cout << "invalid" << std::endl;
		return;
	}
	if (inventory[idx])
		inventory[idx]->use(target);
}

const AMateria *Character::getItem(int idx) const
{
	if (idx < 0 || idx > 3) 
		return (NULL);
	return (inventory[idx]);
}

void	Character::castAway(AMateria *outcast)
{
	if (leftBehind == NULL)
		leftBehind = new UnWanted(outcast);
	else
	{
		UnWanted *temp = leftBehind;
		while (temp->getNext() != NULL)
		{
			if (temp->getCurrent() == outcast)
			{
				std::cout << "Already casted away" << std::endl;
				return ;
			}
			temp = temp->getNext();
		}
		if (temp->getCurrent() == outcast)
		{
			std::cout << "Already casted away" << std::endl;
			return ;
		}
		temp->setNext(new UnWanted(outcast));
	}
}
	 
	

