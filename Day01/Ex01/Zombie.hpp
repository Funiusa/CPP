#ifndef DAY01_ZOMBIE_HPP
#define DAY01_ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		int	number;
		std :: string  m_name;
	public:
		Zombie(std :: string name);
		Zombie();
		~Zombie();

		void announce ();
		void set_values(int number, std :: string name);
		int get_number();
		std :: string get_name();
};

Zombie* zombieHorde( int N, std::string name );

#endif
