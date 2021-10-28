#include "AMateria.hpp"

AMateria::AMateria(){

}

AMateria::~AMateria() {

}

AMateria::AMateria(AMateria const &amat) {
	*this = amat;
}

AMateria & AMateria::operator= (AMateria const &amat) {
	if (this == &amat)
		return *this;
	this->type = amat.type;
	return *this;
}

std::string const & AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter& target) {
	std::cout << "AMateria->use: " << target.getName() << std::endl;
}
