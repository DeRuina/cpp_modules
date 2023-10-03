#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
  std::cout << "ScavTrap constructor called" << std::endl;
  this->hit_Points = 100;
  this->energy_Points = 50;
  this->attack_Damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy.name)
{
  std::cout << "ScavTrap copy constructor called" << std::endl;
  *this = copy;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
  std::cout << "ScavTrap copy assignment operator called" << std::endl;
  this->name = src.name;
  this->hit_Points = src.hit_Points;
  this->energy_Points = src.energy_Points;
  this->attack_Damage = src.attack_Damage;
  return (*this);
}

ScavTrap::~ScavTrap()
{
  std::cout << "ScavTrap destructor called" << std::endl;
}

void  ScavTrap::attack(const std::string &target)
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
  std::cout << "ScavTrap " << this->name << " attacks " << target <<
  ", causing " << this->attack_Damage << " points of damage!" << std::endl;
  this->energy_Points--;
}

void ScavTrap::guardGate()
{
  std::cout << "ScavTrap " << this->name << " is now in gate keeper mode" << std::endl;
}
