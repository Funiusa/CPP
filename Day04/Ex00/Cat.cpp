
#include "Cat.hpp"

Cat::Cat() {
	m_type = "Cat";
	std::cout << "Constructor Cat create CatClass" << std::endl;
}

Cat::Cat(const std::string& type): Animal(type) {
	std::cout << "Constructor Cat create CatClass " << type << std::endl;
}

Cat::Cat(const Cat &cat): Animal(cat) {
	*this = cat;
	std::cout << "Copy constructor create CatClass" << std::endl;
}

Cat &Cat::operator= (const Cat &cat) {
	m_type = cat.m_type;
	return *this;
}

Cat::~Cat() {
	std::cout << "Destructor Cat remove CatClass" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Miau" << std::endl;
}
