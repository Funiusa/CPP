#include "Ice.hpp"

Ice::Ice() {
	this->type = "ice";
}

Ice::~Ice() {

}

Ice::Ice(std::string const& type) {
	this->type = type;
}

Ice::Ice(Ice const &ice): AMateria(ice) {
	*this = ice;
}

Ice * Ice::clone() const {
	Ice *ret = new Ice(*this);
	return ret;
}

void Ice::use(ICharacter & target) {
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
