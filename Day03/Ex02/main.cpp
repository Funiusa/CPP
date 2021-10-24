#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main () {
	ClapTrap H("Halk");
	H.takeDamege(15);
	H.attack("Iron Man");
	std::cout << "-------------------------------" << std::endl;

	ScavTrap S;
	S.guardGate();
	std::cout << "-------------------------------" << std::endl;

	ScavTrap G("Spider Man");
	G.getAttackDamage();
	G.beRepaired(4);
	G.takeDamege(10);
	G.attack("Halk");
	std::cout << "-------------------------------" << std::endl;

	FragTrap F("Lue Khan");
	std::cout << "-------------------------------" << std::endl;
	F.getAttackDamage();
	F.attack("Spider Man");
	F.highFivesGuys();
	std::cout << "-------------------------------" << std::endl;

	return 0;
}
