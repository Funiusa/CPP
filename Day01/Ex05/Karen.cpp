#include "Karen.hpp"

Karen::Karen() {

}

Karen::~Karen() {

}

void Karen::debug( void ) {
	std :: cout << "I love to get extra bacon\n"
	"for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
				   "I just love it!"
				   << std::endl;
}

void Karen::info( void ) {
	std::cout << "I cannot believe adding extra bacon cost more money.\n"
	"You don’t put enough!  If you did I would not have to ask for it!"
				 << std::endl;
}

void Karen::warning( void ) {
	std :: cout << "I think I deserve to have some extra bacon for free.\n"
	"I’ve been coming here for years\n"
	"and you just started working here last month."
	<< std::endl;
}

void Karen::error( void ) {
	std :: cout << "This is unacceptable,\n"
	       "I want to speak to the manager now."
		<< std::endl;
}

void Karen::complain( const std::string &level ) {
	std::string lMass[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void (Karen::*arrPtr[4])() = {	&Karen::debug,
					&Karen::info,
					&Karen::warning,
					&Karen::error };
	int le = 0;
	for (; le < 4 && lMass[le] != level; le++)
		;
	return (this->*arrPtr[le])();
}
