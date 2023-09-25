#include "ClapTrap.hpp"

int main(void)
{
  ClapTrap clapIt("Rasmus");
  clapIt.attack("Joao");
  clapIt.takeDamage(3);
  clapIt.beRepaired(1);
  clapIt.attack("Jun");
  clapIt.beRepaired(1);
  clapIt.takeDamage(9);
  clapIt.attack("Dean");
  clapIt.beRepaired(10);
  return (0);
}