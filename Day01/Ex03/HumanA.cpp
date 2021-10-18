#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA :: HumanA(std::string name, Weapon& mWeapon) : m_name(name), m_weapon(mWeapon) {
	std :: cout << this->m_name + " take the " + this->m_weapon.getType()
				<< std::endl;
}

HumanA::~HumanA() {
	std::cout << this->m_name << " died a stupid death...(✖_✖)\n";
}

void HumanA :: attack(std :: string enemy) {
	std :: cout << this->m_name
				<< " attacks " << enemy << " with his " << this->m_weapon.getType() << std :: endl;
}

