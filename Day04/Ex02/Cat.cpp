
#include "Cat.hpp"

Cat::Cat() {
	m_type = "Cat";
	m_brain = new Brain();
	std::cout << "Constructor Cat create CatClass" << std::endl;
}

Cat::Cat(const Cat &cat) {
	std::cout << "Copy constructor create CatClass" << std::endl;
	*this = cat;
}

Cat &Cat::operator= (const Cat &cat) {
	std::cout << "Overloading assignment Cat" << std::endl;
	if (this == &cat)
		return *this;
	delete m_brain;
	m_type = cat.m_type;
	m_brain = new Brain(*cat.m_brain);
	return *this;
}

Cat::~Cat() {
	std::cout << "Destructor Cat remove CatClass" << std::endl;
	delete m_brain;
}

void Cat::makeSound() const{
	std::cout << "Miau" << std::endl;
}

Brain &Cat::useBrain() {
	return *m_brain;
}
