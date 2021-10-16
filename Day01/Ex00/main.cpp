#include "Zombie.hpp"

int main (void) {

	Zombie zomb1("\x1B[32mAsh Williams\033[0m");
	zomb1.announce();

	std :: cout << std :: endl;
	Zombie* heapZomb1 = new Zombie("\x1B[32mDetective Roger Mortis\033[0m");
	std :: cout << "Heap ";
	heapZomb1->announce();
	std :: cout << "Heap ";
	delete heapZomb1;

	std :: cout << std :: endl;

	randomChump("Random champ \x1B[32mFrankenstein\033[0m");
	std :: cout << std :: endl;
	return 0;
}