
#ifndef EX03_DIAMONDTRAP_HPP
#define EX03_DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, FragTrap {
private:
	std::string m_name;
public:
	DiamondTrap();
	DiamondTrap(const std::string& name);
	~DiamondTrap();
	void setName(const std::string& name);
	std::string getName();
	void attack(std::string const &target);
	void whoAmI();

};


#endif
