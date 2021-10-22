#include "Fixed.hpp"

int main () {
	Fixed a;
	Fixed const b(Fixed( 5 ) + Fixed( 5 ));
	Fixed const c(10);
	Fixed const d(15);

	Fixed e = c + d;
	std::cout << "this is b: " << b << " ,this is e: " << e << std::endl;
	e = d - c;
	std::cout << "this is e: " << e << std::endl;
	e = d * c;
	std::cout << "this is e: " << e << std::endl;
	e = Fixed( 256 ) / Fixed( 8 );
	std::cout << "this is e: " << e << std::endl;
	e = Fixed( 32 ) * Fixed( 8 );
	std::cout << "this is e: " << e << std::endl;


	// increment
	std::cout << "Increment" << std::endl;

	std::cout << "this is a: " << a << std::endl;
	std::cout << "this is a: " << ++a << std::endl;
	std::cout << "this is a: " << a << std::endl;
	std::cout << "this is a: " << a++ << std::endl;
	std::cout << "this is a: " << a << std::endl;

	// decrement
	std::cout << "Decrement" << std::endl;

	std::cout << "this is a: " << --a << std::endl;
	std::cout << "this is a: " << --a << std::endl;

	Fixed const g( Fixed( 5.05f ) * Fixed( 2 ));

	std::cout << "this is g: " << g << std::endl;
	std::cout << Fixed::max( a, g ) << std::endl;
	std::cout << Fixed::min( a, g ) << std::endl;

	std::cout << (Fixed( 5 ) < Fixed( 5.05f )) << std::endl;
	std::cout << (Fixed( 5 ) > Fixed( 5.05f )) << std::endl;
	std::cout << (Fixed( 5 ) >= Fixed( 5.05f )) << std::endl;
	std::cout << (Fixed( 5 ) <= Fixed( 5.05f )) << std::endl;
	std::cout << (Fixed( 5 ) == Fixed( 5.05f )) << std::endl;
	std::cout << (Fixed( 5 ) == Fixed( 5 )) << std::endl;
	std::cout << (Fixed( 5 ) != Fixed( 5 )) << std::endl;



	return 0;
}
