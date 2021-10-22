#include "Fixed.hpp"

Fixed::Fixed(): m_value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed): m_value(fixed.m_value) {
	std::cout << "Copy constructor called" << std::endl;
}

// Int
Fixed::Fixed(int i_value) {
	//this->m_value = i_value << Fixed::m_stat_const;
	m_value = i_value * pow(2, m_stat_const);
	std::cout << "Int constructor called" << std::endl;
}

//Float
Fixed::Fixed(const float f_value) {
	std::cout << "Float constructor called" << std::endl;
	this->m_value = (int)roundf(f_value * (float)pow(2, m_stat_const));
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->m_value;
}

void		Fixed::setRawBits(int const raw)
{
	this->m_value = raw;
}

float Fixed::toFloat() const {
	return (float)(m_value / pow(2, m_stat_const));
}

int Fixed::toInt() const {
	return roundf(m_value / pow(2, m_stat_const));
}

Fixed& Fixed::operator= (const Fixed &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &fixed) { return *this; }
	m_value = fixed.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Fixed& value)
{
	out << value.toFloat();
	return out;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
