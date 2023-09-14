#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *bastards = new Zombie[N];
	for (int i = 0; i < N; i++)
		bastards[i].set_name(name);
	return (bastards);
}
