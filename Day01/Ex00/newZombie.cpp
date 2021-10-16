#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
	std :: cout << "Heap zombie " << name << "was create\n";
	return  new Zombie(name);
}

