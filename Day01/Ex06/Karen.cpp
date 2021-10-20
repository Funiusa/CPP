#include "Karen.hpp"

Karen::Karen() {

}

Karen::~Karen() {

}

void Karen::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std :: cout << "I love to get extra bacon "
				   "for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
				   "I just love it!\n";
}

void Karen::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money."
				 "You don’t put enough!"
				 " If you did I would not have to ask for it!\n";
}

void Karen::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std :: cout << "I think I deserve to have some extra bacon for free.\n"
				   "I’ve been coming here for years and you just started working "
				   "here last month.\n";
}

void Karen::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std :: cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void Karen::complain( const std::string &level ) {
	std::string lMass[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void (Karen::*arrPtr[4])() = { &Karen::debug,
								   &Karen::info,
								   &Karen::warning,
								   &Karen::error };
	for (int le = 0; le < 4; le++) {
		if (level == lMass[le]) {
			(this->*arrPtr[le])(); break ;
		}
	}
}
