
#ifndef EX00_CLAPTRAP_HPP
#define EX00_CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
protected:
	std::string m_name;
	int m_hit;
	int m_energy;
	int m_attack_damage;

public:
	ClapTrap();
	ClapTrap(const std::string& name);
	~ClapTrap();

	void setName(std::string name);
	std::string getName();
	void setHit(int hit);
	int getHit();
	void setEnergy(int energy);
	int getEnergy();
	void setAttDamege(int attDamage);
	int getAttDamege();

	virtual void attack(std::string const &target);
	void takeDamege(unsigned int amount);
	void beRepaired(unsigned int amount);
	int getAttackDamage() const;
	int getHit() const;
};
#endif
