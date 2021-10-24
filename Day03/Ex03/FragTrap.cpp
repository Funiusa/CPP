#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("DefaultFlagTrap") {
	setHit(100);
	setEnergy(100);
	setAttDamege(30);
	std::cout << "FragTrap constructor create class called " + this->getName() << std::endl;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name) {
	setHit(100);
	setEnergy(100);
	setAttDamege(30);
	std::cout << "FragTrap constructor create class called " + name << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor remove class " + this->getName() << std::endl;
}

void FragTrap::highFivesGuys(void) {

	std::cout << "FragTrap " << this->getName() << ": high five!" << std::endl;
}

void FragTrap::attack(const std::string &target) {
	std::cout << "FragTrap " + m_name + " attack " + target
			  << ", causing " << this->m_attack_damage
			  << " points of damage!" << std::endl;
}
