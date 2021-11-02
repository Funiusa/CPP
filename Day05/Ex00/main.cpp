#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat bur1("Igor", 1);
		bur1.incGrade();
		bur1.decGrade();
		bur1.decGrade();
		std::cout << bur1 << std::endl;
	}
	catch (std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
