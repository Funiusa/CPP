#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie* zombie = NULL;

	if (N < 0)
		std::cout << "Only positive zombies \x1B[33m(¬ºu°)¬\033[0m\n";
	else {
		zombie = new Zombie[N];
		for (int i = 0; i < N; i++)
			zombie[i].set_values(i + 1, name);
	}
	return zombie;
}