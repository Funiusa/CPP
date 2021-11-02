#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
: Form("PresidentialPardoneForm", 25, 5), m_target(target)  {

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
: Form(other) {

}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {

	if (executor.getGrade() > this->getExec()) {
		std::cout << executor.getName() << ": ";
		throw PresidentialPardonFormException();
	}
	else if (!this->getNoun()) {
		std::cout << executor.getName() << ": ";
		throw Form::NotSignedException();
	}
	if (this->getNoun()) {
		std::cout << executor.getName() << " execute form " << m_target << ": "
		 << "\x1B[36m\n"
			"\t\t\tHey. Sorry to hear about your planet. What was it called again?\n"
			"\t\t\tYeah, Earth. I liked Earth. I got these boots on Earth.\n"
			"\t\t\tAnyway, don't tell the girl, OK?\n"
			"\t\t\tCause if you do, I'll pull your spleen out through your throat.\033[0m"
				  << std::endl;
	}
}

std::string const &PresidentialPardonForm::getTarget() const {
	return m_target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	if (this == &other)
		return *this;
	*this = other;
	return *this;
}

const char *PresidentialPardonForm::PresidentialPardonFormException::what() const throw() {
	return ("\x1B[31mThe president has zeroed out and no longer apologizes\033[0m");;

}
