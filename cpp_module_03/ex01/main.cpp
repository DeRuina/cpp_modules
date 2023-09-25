#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
  ScavTrap ScavIt("Teemu");
  ScavIt.attack("Riku");
  ScavIt.takeDamage(30);
  ScavIt.beRepaired(12);
  ScavIt.guardGate();
  ScavIt.attack("Hans");
  ScavIt.takeDamage(90);
  ScavIt.beRepaired(100);
  ScavIt.attack("Mark");
  return (0);
}