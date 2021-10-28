#include "Dog.hpp"

Dog::Dog() {
	m_type = "Dog";
	m_brain = new Brain();
	std::cout << "Constructor Dog create DogClass" << std::endl;
}

Dog::Dog(const Dog &dog) {;
	std::cout << "Copy constructor create DogClass" << std::endl;
	*this = dog;
}

Dog& Dog::operator= (const Dog &dog) {
	std::cout << "Overloading assignment Dog class" << std::endl;
	if (this == &dog)
		return *this;
	delete m_brain;
	m_type = dog.m_type;
	m_brain = new Brain();
	*m_brain = *dog.m_brain;
	return *this;
}

Dog::~Dog() {
	std::cout << "Destructor Dog remove DogClass" << std::endl;
	delete m_brain;
}

void Dog::makeSound() const{
	std::cout << "Woof" << std::endl;
}

Brain &Dog::useBrain() const {
	return *m_brain;
}

