#ifndef EX02_FRAGTRAP_HPP
#define EX02_FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
public:
	FragTrap();
	FragTrap(const std::string& name);
	~FragTrap();

	void highFivesGuys(void);
	void attack(std::string const &target);

};

#endif
