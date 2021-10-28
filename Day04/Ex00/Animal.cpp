#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Constructor Animal create Default class" << std::endl;
}

Animal::Animal(const std::string& type): m_type(type) {
	std::cout << "Constructor Animal create class " <<
	this->m_type << std::endl;
}

Animal::Animal(const Animal &animal): m_type(animal.m_type) {
	*this = animal;
	std::cout << "Copy constructor Animal create class "
	<< this->m_type << std::endl;
}

Animal::~Animal() {
	std::cout << "Destructor Animal remove class " << this->m_type
	<< std::endl;

}

std::string Animal::getType() const{
	return this->m_type;
}

void Animal::setType(const std::string &type) {
	m_type = type;
}

void Animal::makeSound() const {
	std::cout << "Animal make sound ???" << std::endl;
}

Animal& Animal::operator= (const Animal &other) {
	std::cout << "Animal assignation operator called" << std::endl;
	this->m_type = other.m_type;
	return *this;
}
