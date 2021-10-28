#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() {
	m_type = "Dog";
	std::cout << "Constructor Dog create DogClass" << std::endl;
}

Dog::Dog(const std::string& type): Animal(type) {
	std::cout << "Constructor Dog create DogClass " << type << std::endl;
}

Dog::Dog(const Dog &dog){
	*this = dog;
	std::cout << "Copy constructor create DogClass" << std::endl;
}

Dog& Dog::operator= (const Dog &dog) {
	m_type = dog.m_type;
	return *this;
}

Dog::~Dog() {
	std::cout << "Destructor Dog remove DogClass" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Woof" << std::endl;
}

