
#include "DiamondTrap.hpp"
#include <string>

DiamondTrap::DiamondTrap(): ClapTrap("_name"), ScavTrap(), FragTrap() {
	this->m_hit = this->FragTrap::getHit();
	this->m_energy = this->ScavTrap::getEnergy();
	this->m_attack_damage = this->FragTrap::getAttackDamage();
	std::cout << "Constructor create class DiamondTrap called " + m_name << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name): ScavTrap(name), FragTrap(name) {
	this->setName(name);
	this->m_name = this->m_name + "_clap_name";
	this->m_hit = this->FragTrap::getHit();
	this->m_energy = this->ScavTrap::getEnergy();
	this->m_attack_damage = this->FragTrap::getAttackDamage();
	std::cout << "Constructor create class DiamondTrap called " + name << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor remove class called " + this->m_name << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << this->getName() << " it is a DiamondTrap class" << std::endl;
}

void DiamondTrap::setName(const std::string& name) {
	std::string forClapTrap;

	forClapTrap = name;
	this->m_name = forClapTrap + "_clap_name";
	this->m_name = name;
}

std::string DiamondTrap::getName() {
	return this->m_name;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}
