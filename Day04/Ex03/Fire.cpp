
#include "Fire.hpp"

Fire::Fire() {
	this->type = "fire";
}

Fire::~Fire(){

}

Fire::Fire(std::string const& type) {
	this->type = type;
}

Fire::Fire(Fire const &fire): AMateria(fire) {
	*this = fire;
}

Fire * Fire::clone() const
{
	Fire *ret = new Fire(*this);
	return ret;
}

void Fire::use(ICharacter & target)
{
	std::cout <<  "* shoots an fire ball at " << target.getName() << " *" << std::endl;
}
