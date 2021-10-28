
#ifndef EX03_FIRE_HPP
#define EX03_FIRE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Fire : public AMateria
{
public:
	Fire();
	~Fire();
	Fire(std::string const& type);
	Fire(Fire const &fire);
	Fire *clone() const;
	void use(ICharacter & target);
};


#endif
