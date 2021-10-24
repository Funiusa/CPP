#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("DefaultScavTrap") {
	this->setHit(100);
	this->setEnergy(100);
	this->setAttDamege(20);
	std::cout << "ScavTrap constructor create default class called " << this->m_name << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	this->setHit(100);
	this->setEnergy(100);
	this->setAttDamege(20);
	std::cout << "ScavTrap constructor create class called " + name << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor remove class " + this->getName() << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "Class ScavTrap called " << this->getName()
	<< " entered in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " + this->m_name + " attack " + target
			   << ", causing " << this->m_attack_damage
			   << " points of damage!" << std::endl;
}
