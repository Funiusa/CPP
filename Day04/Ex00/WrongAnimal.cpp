#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): m_type("default") {
	std::cout << "Default constructor WrongAnimal create class "
	+ m_type << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type): m_type(type) {
	std::cout << "Constructor WrongAnimal create class " + type
	<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal) {
	*this = animal;
	std::cout << "Copy constructor create WrongAnimal class" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor Wrong Animal" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &animal) {
	m_type = animal.m_type;
	std::cout << "Assignation operator WrongAnimal"  << std::endl;
	return *this;
}

std::string WrongAnimal::getType() const {
	return this->m_type;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal make sound ???" << std::endl;

}
