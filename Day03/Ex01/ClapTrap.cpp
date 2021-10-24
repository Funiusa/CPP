#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): m_name("Default"), m_hit(0), m_energy(0), m_attack_damage(0) {

}

ClapTrap::ClapTrap(const std::string& name):	m_name(name),
												m_hit(10),
												m_energy(10),
												m_attack_damage(0) {
	std::cout << "Constructor create class ClapTrap called " + m_name << std::endl;
}

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
	std::cout << "Class " + this->m_name + " has been repair by "
	<< amount << " points." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor remove class called " + this->m_name << std::endl;
}

int ClapTrap::getAttackDamage() const {
	return this->m_attack_damage;
}

int ClapTrap::getHit() const {
	return this->m_hit;
}

void ClapTrap::setName(std::string name) {
	m_name = name;
}

std::string ClapTrap::getName() {
	return this->m_name;
}

void ClapTrap::setHit(int hit) {
	m_hit = hit;
}

int ClapTrap::getHit() {
	return this->m_hit;
}

void ClapTrap::setEnergy(int energy) {
	m_energy = energy;
}

int ClapTrap::getEnergy() {
	return this->m_energy;
}

void ClapTrap::setAttDamege(int attDamage) {
	m_attack_damage = attDamage;
}

int ClapTrap::getAttDamege() {
	return this->m_attack_damage;
}
