#include "Zombie.hpp"

Zombie :: Zombie ( std :: string name ) {
	this->m_name = name;
}

Zombie :: Zombie () {
	std :: cout << "Zombie was create..."<< std :: endl;
}

Zombie :: ~Zombie() {
	std :: cout << "\x1B[31mDestructor kill zombie\033[0m " << this->get_name()
	<< " " << this->get_number() <<  std :: endl;
}

std :: string Zombie :: get_name() {
	return this->m_name;
}

void Zombie :: set_values(int number, std::string name) {
	this->m_name = name;
	this->number = number;
}

int Zombie :: get_number() {
	return this->number;
}

void Zombie :: announce () {
	std :: cout << this->get_number() << " \x1B[34m"
	<< this->get_name() << " \x1B[35m(¬º-°)¬\033[0m"
	<< " BraiiiiiiinnnzzzZ..." << std :: endl;
}

