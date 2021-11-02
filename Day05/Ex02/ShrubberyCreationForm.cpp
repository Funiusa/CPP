
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
: Form("ShrubberyCreationForm",145, 137) {
	m_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
: Form(other) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm &ShrubberyCreationForm::operator= (const ShrubberyCreationForm &other) {
	if (this == &other)
		return *this;
	*this = other;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > this->getExec()) {
		std::cout << executor.getName() << ": ";
		throw Form::GradeTooLowException();
	}
	else if (!this->getNoun()) {
		std::cout << executor.getName() << ": ";
		throw Form::NotSignedException();
	}
	else {
		std::cout << executor.getName() << " execute form " << m_target << std::endl;
		std::cout << "\x1B[32m\t\t\t\t\t       ###\n"
							 "\t\t\t\t\t      #o###\n"
							 "\t\t\t\t\t    #####o###\n"
							 "\t\t\t\t\t   #o#\\#|#/###\n"
							 "\t\t\t\t\t    ###\\|/#o#\n"
					 		 "\t\t\t\t\t       }|{   \n"
					 		 "\t\t\t\t\t       }|{\033[0m"  << std::endl;
		std::ofstream formInFile((m_target + "_shrubbery").c_str(), std::ios::out);
		if (!formInFile) {
			std::cout << "Error with file create" << std::endl;
			exit(1);
		}
		formInFile << "		       _   _\n"
					  "             / '-' \\\n"
					  "            ;       ;\n"
					  "         /'-|       |-'\\\n"
					  "        |   |_______K   |\n"
					  "        \\   '-------'   /\n"
					  "         '.___.....___.'\n"
					  "            | ;  : ;|\n"
					  "           _|;__;__.|_\n"
					  "          |     Y     |    .--.\n"
					  " .--.      \\__.'^'.__/    /;   \\\n"
					  "/   ;\\      |_  ;  _|     |  ' |\n"
					  "| ;  |      { `\"\"\"` }     |;   |\n"
					  "|'   |      {       }     | ;  |\n"
					  "|  ; |      {       }     |    |\n"
					  "|;   |      ;`-.__.'|     |:  ;|\n"
					  "| ;  \\      |;  ;   |_____/ ;  |\n"
					  "|   '.'-----'      ' -_   .'   /\n"
					  "\\  '.   - _  ' ;  ;  _  -    .'\n"
					  " '.   -     - ;  ;   .------`\n"
					  "   `--------.      ;|\n"
					  "        	 |;  ,   |\n"
					  "            |     ; |\n"
					  "            |. ;    |\n"
					  "            | :    :|\n"
					  "            |   .   |\n"
					  "            |;   ;  |\n"
					  "            |;  ,   |\n"
					  "            |     ; |\n"
					  "            |. ;    |\n"
					  "            | :    :|\n"
					  "            |   .   |\n"
					  "            |;   ;  |\n"
					  "            |;  ,   |\n"
					  "            |     ; |\n"
					  "            |     ; |\n"
					  "            |. ;    |\n"
					  "            | :    :|\n"
					  "            |   .   |\n"
					  "            |;   ;  |\n"
					  "            `\"-----\"`" << std::endl;
		formInFile.close();
	}
}


std::string const &ShrubberyCreationForm::getTarget() const {
	return this->m_target;
}
