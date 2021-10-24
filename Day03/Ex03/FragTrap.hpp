#ifndef EX02_FLAGTRAP_HPP
#define EX02_FLAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
public:
	FragTrap();
	FragTrap(const std::string& name);
	~FragTrap();

	void highFivesGuys(void);
	void attack(std::string const &target);

};

#endif
