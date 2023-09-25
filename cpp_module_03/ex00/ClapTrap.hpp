#ifndef CLAPTRAP_H
#define  CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
  private:
      std::string name;
      int hit_Points;
      int energy_Points;
      int attack_Damage;

  public:
      ClapTrap(std::string name);
      ClapTrap(const ClapTrap &copy);
      ClapTrap &operator=(const ClapTrap &src);
      ~ClapTrap();

      void attack(const std::string &target);
      void takeDamage(unsigned int amount);
      void beRepaired(unsigned int amount);

};

#endif