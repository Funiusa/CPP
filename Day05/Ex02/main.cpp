#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequesrForm.hpp"
#include "PresidentialPardonForm.hpp"

#include "Form.hpp"

int main() {
	std::cout << "\n\x1B[32m"
				 "██╗░░░██╗░█████╗░░██████╗░░█████╗░███╗░░██╗\n"
				 "██║░░░██║██╔══██╗██╔════╝░██╔══██╗████╗░██║\n"
				 "╚██╗░██╔╝██║░░██║██║░░██╗░███████║██╔██╗██║\n"
				 "░╚████╔╝░██║░░██║██║░░╚██╗██╔══██║██║╚████║\n"
				 "░░╚██╔╝░░╚█████╔╝╚██████╔╝██║░░██║██║░╚███║\n"
				 "░░░╚═╝░░░░╚════╝░░╚═════╝░╚═╝░░╚═╝╚═╝░░╚══╝\033[0m"
				 << std::endl;

	Bureaucrat vogan1("Prostatnik Byrdz", 14);
	std::cout << vogan1 << std::endl;
	ShrubberyCreationForm shrubbery("tree");

	Bureaucrat vogan2("Hupz Comestomorrow", 46);
	RobotomyRequestForm robot("Marvin");
	std::cout << robot << std::endl;


	try {
		std::cout << vogan2 << std::endl;
		vogan2.executeForm(robot);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	vogan2.decGrade();

	try {
		vogan2.executeForm(robot);
		std::cout << vogan2 << std::endl;
		vogan2.signedForm(robot);
		vogan2.executeForm(robot);
		vogan2.executeForm(robot);

		std::cout << shrubbery << std::endl;
		vogan1.executeForm(shrubbery);

	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	Bureaucrat vogan3("Shirgavts Bumagomarraker", 7 );
	std::cout << vogan3 << std::endl;
	PresidentialPardonForm president("Zafod");
	std::cout << president << std::endl;
	try {
		vogan3.signedForm(president);
		vogan3.executeForm(president);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	vogan3.decGrade();
	vogan3.decGrade();

	try {
		std::cout << vogan3 << std::endl;
		std::cout << president << std::endl;
		vogan3.signedForm(president);
		vogan3.executeForm(president);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	vogan1.decGrade();
	vogan1.signedForm(shrubbery);
	vogan1.signedForm(shrubbery);
	vogan1.executeForm(shrubbery);

	return 0;
}
