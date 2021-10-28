#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(std::string const& type);
	Ice(Ice const &ice);
	Ice *clone() const;
	void use(ICharacter & target);
};


#endif
