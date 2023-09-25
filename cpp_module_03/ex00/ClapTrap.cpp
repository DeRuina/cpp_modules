#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hit_Points(10) , energy_Points(10), attack_Damage(0)
{
  std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
  std::cout << "Copy assignment operator called" << std::endl;
  this->name = src.name;
  this->hit_Points = src.hit_Points;
  this->energy_Points = src.energy_Points;
  this->attack_Damage = src.attack_Damage;
  return (*this);
}

ClapTrap::~ClapTrap()
{
  std::cout << "Destructor called" << std::endl;
}

void  ClapTrap::attack(const std::string &target)
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
  std::cout << "ClapTrap " << this->name << " attacks " << target << 
  ", causing " << this->attack_Damage << " points of damage!" << std::endl;
  this->energy_Points--;
}
void ClapTrap::beRepaired(unsigned int amount)
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
  std::cout << "ClapTrap " << this->name << " repaired itself with " << 
  amount << " hit points!" << std::endl;
  this->hit_Points += amount;
}

void  ClapTrap::takeDamage(unsigned int amount)
{
  if (this->hit_Points <= 0)
    {
      std::cout << this->name << " is dead" << std::endl;
      return;
    }
  std::cout << "ClapTrap " << this->name << " took " << amount << " damage!" << std::endl;
  this->hit_Points -= amount;   
}
