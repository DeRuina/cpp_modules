#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
  FragTrap Fragit("Andre");
  Fragit.attack("Rosa");
  Fragit.takeDamage(40);
  Fragit.beRepaired(11);
  Fragit.highFivesGuys();
  Fragit.attack("Hans");
  Fragit.takeDamage(90);
  Fragit.beRepaired(100);
  Fragit.attack("Michaelis");
  
  return (0);
}