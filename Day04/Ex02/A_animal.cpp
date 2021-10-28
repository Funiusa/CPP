#include "A_animal.hpp"

A_animal::A_animal() {
	std::cout << "Constructor A_animal create Default class" << std::endl;
}

A_animal::A_animal(const std::string& type): m_type(type) {
	std::cout << "Constructor A_animal create class " <<
	this->m_type << std::endl;
}

A_animal::A_animal(const A_animal &animal): m_type(animal.m_type) {
	*this = animal;
	std::cout << "Copy constructor A_animal create class "
	<< this->m_type << std::endl;
}

A_animal::~A_animal() {
	std::cout << "Destructor A_animal remove class " << this->m_type
	<< std::endl;

}

std::string A_animal::getType() const{
	return this->m_type;
}

void A_animal::setType(const std::string &type) {
	m_type = type;
}

void A_animal::makeSound() const {
	std::cout << "A_animal make sound ???" << std::endl;
}

A_animal& A_animal::operator= (const A_animal &other) {
	std::cout << "A_animal assignation operator called" << std::endl;
	this->m_type = other.m_type;
	return *this;
}
