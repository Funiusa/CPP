
#ifndef EX03_HUMANB_HPP
#define EX03_HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB {
public:
	std::string	m_name;
	Weapon*		m_weapon;
	HumanB(std::string name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);
};

#endif //EX03_HUMANB_HPP
