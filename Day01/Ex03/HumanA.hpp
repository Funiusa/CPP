#ifndef EX03_HUMANA_HPP
#define EX03_HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA {
public:
	std::string	m_name;
	Weapon&		m_weapon;
	HumanA(std::string name, Weapon &mWeapon);
	~HumanA();
	void attack();
	void attack(std :: string enemy);
};

#endif
