
#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Constructor Brain create class" << std::endl;
}

Brain::Brain(const Brain &brain) {
	*this = brain;
	std::cout << "Copy constructor Brain class" << std::endl;
}

Brain &Brain::operator= (const Brain &brain) {
	if (this == &brain)
		return *this;
	for (int i = 0; i < 100; i++) {
		m_ideas[i] = brain.m_ideas[i];
	}
	std::cout << "Overloading assignment Brain class" << std::endl;
	return *this;
}

Brain::~Brain() {
	std::cout << "Destructor Brain" << std::endl;
}

void Brain::setIdea(int index, const std::string& idea) {
	m_ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
	return m_ideas[index];
}