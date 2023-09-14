#include "Zombie.hpp"

int main(void)
{
	int num = 10;
	Zombie *rotten_flesh_eaters = zombieHorde(num, "Jun");
	for (int i = 0; i < 10; i++)
		rotten_flesh_eaters[i].announce();
	delete [] rotten_flesh_eaters;
	return (0);
}
