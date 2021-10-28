#include "Cure.hpp"

Cure::Cure() {
	this->type = "cure";
}

Cure::~Cure() {

}

Cure::Cure(std::string const& type) {
	this->type = type;
}

Cure::Cure(Cure const &cure): AMateria(cure) {
	*this = cure;
}

Cure * Cure::clone() const {
	Cure *ret = new Cure(*this);
	return ret;
}

void Cure::use(ICharacter & target) {
	if (target.getName() == "me")
		std::cout <<  "* heals my wounds *" << std::endl;
	else
		std::cout <<  "* heals " << target.getName() << "'s wounds *" << std::endl;
}
