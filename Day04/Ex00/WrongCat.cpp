#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat(): WrongAnimal() {
	std::cout << "Constructor WrongCat create default class" << std::endl;

}

WrongCat::WrongCat(const std::string &type): WrongAnimal(type) {
	std::cout << "Constructor WrongCat create class " + type << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat) {
	std::cout << "Copy constructor WrongCat create class" << std::endl;
	*this = cat;
}

WrongCat &WrongCat::operator=(const WrongCat &cat) {
	m_type = cat.m_type;
	std::cout << "Assignation operator WrongCat" << std::endl;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "Destructor WrongCat" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat make sound Wmiiiu" << std::endl;
}

std::string WrongCat::getType() const {
	return this->m_type;
}
