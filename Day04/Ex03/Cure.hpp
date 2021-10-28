#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure();
	~Cure();
	Cure(std::string const& type);
	Cure(Cure const &cure);

	Cure *clone() const;
	void use(ICharacter & target);
};


#endif
