#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequesrForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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
	Bureaucrat vogan1("Vrunt Refusal", 21);
	std::cout << vogan1 << std::endl;
	Intern someRandomIntern;
	Form *rrf;

	try {

		rrf = someRandomIntern.makeForm("robotomy request", "Marvin");
		std::cout << *rrf << std::endl;
		vogan1.executeForm(*rrf);
		rrf = someRandomIntern.makeForm("Sh", "error");
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	delete rrf;
	return 0;
}
