#include "Zombie.hpp"

int main (void) {

	int N = 0;

	std :: cout << "\x1B[33mHow much zombies do you wont master:\033[0m ";
	std :: cin >> N;
	std :: cout << std :: endl;
	Zombie* zombie = zombieHorde(N, "Shaun");

	for (int i = 0; i < N; i++)
		zombie[i].announce();

	std :: cout << std :: endl;
	delete [] zombie;
	return 0;
}