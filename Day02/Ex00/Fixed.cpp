#include "Fixed.hpp"

Fixed::Fixed(): m_value(0) {
	std::cout << "Default constructor called" << std::endl;

}

Fixed::Fixed(const Fixed &fixed): m_value(fixed.m_value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed &fixed) {
	if (this == &fixed) { return *this; }
	m_value = fixed.m_value;
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << this->m_value << std::endl;
	std::cout << "getRawBits member function called" << std::endl;
	return 0;
}

void Fixed::setRawBits(const int raw) {
	this->m_value = raw;
}
