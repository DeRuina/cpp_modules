#ifndef FRAGTRAP_H
#define  FRAGTRAP_H

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  public:
      FragTrap(std::string name);
      FragTrap(const FragTrap &copy);
      FragTrap &operator=(const FragTrap &src);
      ~FragTrap();

      void attack(const std::string &target);
      void highFivesGuys(void);

};

#endif