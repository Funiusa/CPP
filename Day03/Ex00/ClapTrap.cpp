#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " + m_name + " attack " + target
	<< ", causing " << this->m_attack_damage
	<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamege(unsigned int amount) {
		this->m_attack_damage = (int)amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->m_energy += (int)amount;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor remove ClapTrap " + this->m_name << std::endl;
}

ClapTrap::ClapTrap(const std::string& name):	m_name(name),
												m_hit(10),
												m_energy(10),
												m_attack_damage(0) {
	std::cout << "Constructor create class ClapTrap called " + m_name << std::endl;
}

int ClapTrap::getAttackDamage() const {
	return this->m_attack_damage;
}

int ClapTrap::getHit() const {
	return this->m_hit;
}
