#include "Fixed.hpp"

Fixed::Fixed(): m_value(0) {
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed): m_value(fixed.m_value) {
	//std::cout << "Copy constructor called" << std::endl;
}

// Int
Fixed::Fixed(int i_value) {
	//this->m_value = i_value << Fixed::m_stat_const;
	m_value = i_value * pow(2, m_stat_const);
	//std::cout << "Int constructor called" << std::endl;
}

//Float
Fixed::Fixed(const float f_value) {
	//std::cout << "Float constructor called" << std::endl;
	this->m_value = (int)roundf(f_value * (float)pow(2, m_stat_const));
}

int Fixed::getRawBits() const {
	//std::cout << "getRawBits member function called" << std::endl;
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
	return (int)(roundf(this->toFloat()));
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
	//std::cout << "Destructor called" << std::endl;
}

bool Fixed::operator> (const Fixed &fixed) const {
	std::cout << "Comparison operator > called" << std::endl;
	return (m_value > fixed.m_value);
}

bool Fixed::operator< (const Fixed &fixed) const {
	std::cout << "Comparison operator < called" << std::endl;
	return (m_value < fixed.m_value);
}

bool Fixed::operator>= (const Fixed &fixed) const {
	std::cout << "Comparison operator >= called" << std::endl;
	return (m_value >= fixed.m_value);
}

bool Fixed::operator<= (const Fixed &fixed) const {
	std::cout << "Comparison operator <= called" << std::endl;
	return (m_value <= fixed.m_value);
}

bool Fixed::operator== (const Fixed &fixed) const {
	std::cout << "Comparison operator == called" << std::endl;
	return (m_value == fixed.m_value);
}

bool Fixed::operator!= (const Fixed &fixed) const {
	std::cout << "Comparison operator != called" << std::endl;
	return (m_value != fixed.m_value);
}

Fixed Fixed::operator+ (const Fixed &fixed) const {
	std::cout << "Comparison operator + called" << std::endl;
	Fixed res = Fixed(*this);
	res.m_value += fixed.m_value;
	return res;
}

Fixed Fixed::operator- (const Fixed &fixed) const {
	std::cout << "Comparison operator - called" << std::endl;
	Fixed res = Fixed(*this);
	res.m_value -= fixed.m_value;
	return res;
}

Fixed Fixed::operator* (const Fixed &fixed) const {
	Fixed res = Fixed(*this);
	std::cout << "Comparison operator * called" << std::endl;
	res.m_value = (res.m_value * fixed.m_value) / 256;
	return res;
}

Fixed Fixed::operator/ (const Fixed &fixed) const {
	std::cout << "Comparison operator / called" << std::endl;
	Fixed res = Fixed(*this);
	res.m_value = (res.m_value / fixed.m_value) * 256;
	return res;
}

Fixed& Fixed::operator++ () {
	++m_value;
	return *this;
}

Fixed& Fixed::operator-- () {
	--m_value;
	return *this;
}

Fixed Fixed::operator++ (int) {
	Fixed tmp(*this);
	++m_value;
	return tmp;
}

Fixed Fixed::operator-- (int) {
	Fixed tmp(*this);
	--m_value;
	return tmp;
}

Fixed const &Fixed::max(const Fixed &first, const Fixed &second) {
	if (first.m_value > second.m_value)
		return first;
	return second;
}

Fixed const &Fixed::min(const Fixed &first, const Fixed &second) {
	if (first.m_value < second.m_value)
		return first;
	return second;
}

