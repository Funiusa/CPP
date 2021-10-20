#include "Karen.hpp"

int main(int argc, char **argv) {
	Karen karen;

	if (argc != 2) {
		std::cout << "Error. Argument problem." << std::endl;
	}
	else {
		std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
		int arg_case = -1;
		for (; arg_case < 4; arg_case++) {
			if (argv[1] == levels[arg_case]) { break; }
		}
		switch (arg_case) {
			case 0:
				karen.complain("DEBUG");
				std::cout << std::endl;
			case 1:
				karen.complain("INFO");
				std::cout << std::endl;
			case 2:
				karen.complain("WARNING");
				std::cout << std::endl;
			case 3:
				karen.complain("ERROR");
				break ;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]"
						  << std::endl;
		}
	}
	return 0;
}