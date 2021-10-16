#include "Zombie.hpp"

Zombie :: Zombie (std :: string name) : m_name(name) {
	std :: cout << "Zombie " << m_name << " was create.\n";
	return ;
}

Zombie :: ~Zombie() {
	std :: cout << "\x1B[31mDestructor kill zombie \033[0m" << this->get_name()
	<< std :: endl;
}

std :: string Zombie :: get_name() {
	return this->m_name;
}

void Zombie :: set_name(std::string name) {
	this->m_name = name;
	return ;
}

void Zombie :: announce () {
	std :: cout << this->get_name() << " \x1B[35m[¬º-°]¬\033[0m "
	<< " BraiiiiiiinnnzzzZ..." << std :: endl;
}

