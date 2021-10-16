#ifndef DAY01_ZOMBIE_HPP
#define DAY01_ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std :: string  m_name;
	public:
		Zombie(std :: string name);
		~Zombie();

		void announce ();
		void set_name(std :: string name);
		std :: string get_name();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
