#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	std::cout << "\n"
				 "██╗░░░██╗░█████╗░░██████╗░░█████╗░███╗░░██╗\n"
				 "██║░░░██║██╔══██╗██╔════╝░██╔══██╗████╗░██║\n"
				 "╚██╗░██╔╝██║░░██║██║░░██╗░███████║██╔██╗██║\n"
				 "░╚████╔╝░██║░░██║██║░░╚██╗██╔══██║██║╚████║\n"
				 "░░╚██╔╝░░╚█████╔╝╚██████╔╝██║░░██║██║░╚███║\n"
				 "░░░╚═╝░░░░╚════╝░░╚═════╝░╚═╝░░╚═╝╚═╝░░╚══╝"
				 << std::endl;

	Bureaucrat vogan1("Prostatnik Byrdz", 2);
	Form form1("FORM#", 2, 1);

	std::cout << vogan1 << std::endl;
	std::cout << form1 << std::endl;
	try {
		vogan1.incGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	vogan1.decGrade();
	vogan1.incGrade();
	std::cout << vogan1 <<  std::endl;
	vogan1.decGrade();
	std::cout << vogan1 << std::endl;

	// Try first sign
	try {
		vogan1.signedForm(form1);
		std::cout << form1 << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	// Try second sign
	std::cout << vogan1 << std::endl;
	try {
		vogan1.signedForm(form1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
