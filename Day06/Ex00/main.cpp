#include <iostream>
#include <string>
#include <cstdlib>
#include "Converter.hpp"

int main(int argc, char **argv) {
	if (argc == 2) {
		Converter conv;
		conv.convertToChar(argv[1]);
		std::cout << std::endl;
		conv.convertToInt(argv[1]);
		std::cout << std::endl;
		conv.convertToFloat(argv[1]);
		std::cout << std::endl;
		conv.convertToDouble(argv[1]);
		std::cout << std::endl;

	}
	else {
		std::cout << "Error argument" << std::endl;
		exit(1);
	}

	return 0;
}
