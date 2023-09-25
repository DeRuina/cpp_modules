#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
  std::cout << "FragTrap constructor called" << std::endl;
  this->hit_Points = 100;
  this->energy_Points = 100;
  this->attack_Damage = 30;
}
FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy.name)
{
  std::cout << "FragTrap copy constructor called" << std::endl;
  *this = copy;
}
FragTrap &FragTrap::operator=(const FragTrap &src)
{
  std::cout << "FragTrap copy assignment operator called" << std::endl;
  this->name = src.name;
  this->hit_Points = src.hit_Points;
  this->energy_Points = src.energy_Points;
  this->attack_Damage = src.attack_Damage;
  return (*this);
}

FragTrap::~FragTrap()
{
  std::cout << "FragTrap destructor called" << std::endl;
}
void FragTrap::attack(const std::string &target)
{
  if (this->energy_Points == 0)
    {
      std::cout << " NO ENERGY" << std::endl;
      return;
    }
  if (this->hit_Points <= 0)
    {
      std::cout << this->name << " is dead" << std::endl;
      return;
    }
  std::cout << "FragTrap " << this->name << " attacks " << target << 
  ", causing " << this->attack_Damage << " points of damage!" << std::endl;
  this->energy_Points--;
}

void FragTrap::highFivesGuys()
{
  std::cout << "FragTrap " << this->name << " asks for a hive five, GIVE ME ONE DAWG!" << std::endl;
}