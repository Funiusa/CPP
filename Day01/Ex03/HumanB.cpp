#include "HumanB.hpp"

HumanB::HumanB(std::string name) : m_name(name) {
}

HumanB::~HumanB() {
	std::cout << this->m_name << " died of drunkenness...＼（〇_ｏ）／\n";
}

void HumanB :: setWeapon(Weapon& weapon) {
	this->m_weapon = &weapon;
}

void HumanB::attack() {
	std :: cout << this->m_name
				<< " attacks with his " << this->m_weapon->getType() << std :: endl;
}
