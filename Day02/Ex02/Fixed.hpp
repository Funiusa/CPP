
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
	bool operator> (const Fixed &fixed) const;
	bool operator< (const Fixed &fixed) const;
	bool operator>= (const Fixed &fixed) const;
	bool operator<= (const Fixed &fixed) const;
	bool operator== (const Fixed &fixed) const;
	bool operator!= (const Fixed &fixed) const;

	Fixed operator+ (const Fixed &fixed) const;
	Fixed operator- (const Fixed &fixed) const;
	Fixed operator* (const Fixed &fixed) const;
	Fixed operator/ (const Fixed &fixed) const;

	Fixed& operator++ (); // prefix
	Fixed& operator-- (); // prefix
	Fixed operator++ (int); // postfix
	Fixed operator-- (int); // postfix

	static Fixed const &max(const Fixed &first, const Fixed &second);
	static Fixed const &min(const Fixed &first, const Fixed &second);

	operator int() { return toInt(); }
	operator float() { return toFloat(); }

	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream &out, const Fixed& value);

#endif
