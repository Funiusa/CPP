#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"

int main() {
	std::cout << "\n\t\t\tOfficial story:\n";

		{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}

	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	std::cout << "\n\t\t\tTrue story:\n";
	{
		Weapon club = Weapon("\x1B[31mCrude spiked club");

		HumanA bob("\x1B[32mBob\033[0m", club);
		bob.attack("Jim");

		HumanB jim("\x1B[33mJim\033[0m");
		jim.setWeapon(club);
		std :: cout << jim.m_name + " take his " + jim.m_weapon->getType() << std::endl;
		jim.attack("Bob");
		club.setType("\x1B[31mBroken metal club\033[0m");
		jim.setWeapon(club);
		std :: cout << jim.m_name + " take his " + jim.m_weapon->getType() << std::endl;
		jim.attack("Bob");

		std::cout << "\x1B[34m*******************************************************\n*\033[0m"
		<< "  Oh no this is Jonny (Jonny have a gun)! "
		<< "\x1B[31m  ︻デ┳═ー\033[0m " 
	      	<< "\x1B[34m*\n*******************************************************\033[0m\n";
		
		Weapon gun = Weapon("\x1B[31mBig scary gun\033[0m");
		HumanA jonny("\x1B[35mJonny\033[0m", gun);
		jonny.attack("all the goats");
		std::cout << "Two previous motherfuckers caught a bullet!\n\t\t\t"
				   "\x1B[36mTHE END!\033[0m\n";
		std::cout << "PS:\n";
	}
	return 0;
}

