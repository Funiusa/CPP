
#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed {
private:
	int m_value;
	static const int m_stat_const = 8;
public:
	Fixed();
	explicit Fixed(int value);
	explicit Fixed(float value);
	~Fixed();

	Fixed(const Fixed &fixed);
	Fixed& operator= (const Fixed &fixed);

	operator int() { return toInt(); }
	operator float() { return toFloat(); }

	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream &out, const Fixed& value);

#endif
