#ifndef SCAVTRAP_H
#define  SCAVTRAP_H

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
      ScavTrap(std::string name);
      ScavTrap(const ScavTrap &copy);
      ScavTrap &operator=(const ScavTrap &src);
      ~ScavTrap();

      void attack(const std::string &target);
      void guardGate();

};

#endif