
#ifndef EX03_WEAPON_HPP
#define EX03_WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
private:
	std::string	m_type;
public:
	Weapon(std::string);
	~Weapon();
	void	setType( std::string type);
	const std::string&	getType();
};

#endif
