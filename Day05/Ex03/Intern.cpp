#include "Intern.hpp"

Form *Intern::MakeShrubberyForm(const std::string &target) const {
	return new ShrubberyCreationForm(target);
}

Form *Intern::MakeRobotomyForm(const std::string &target) const {
	return new RobotomyRequestForm(target);
}

Form *Intern::MakePresidentialForm(const std::string &target) const {
	return new PresidentialPardonForm(target);
}

Intern::Intern() {

}

Intern &Intern::operator=(const Intern &intern) {
	if (this == &intern)
		return (*this);
	*this = intern;
	return *this;
}

Form *Intern::makeForm(const std::string &form_name, const std::string &form_target) const {
	std::string form_names[3] = {"shrubbery request", "robotomy request", "president request"};
	Form *(Intern::*forms_ptr[3])(const std::string &target) const = {	&Intern::MakeShrubberyForm,
																 		&Intern::MakeRobotomyForm,
																 		&Intern::MakePresidentialForm };
	int elem = 0;
	while (elem < 3 && form_names[elem] != form_name)
		elem++;
	switch (elem) {
		case 0:
			std::cout << "Intern creates " << form_names[elem] << std::endl;
			break ;
		case 1:
			std::cout << "Intern creates " << form_names[elem] << std::endl;
			break ;
		case 2:
			std::cout << "Intern creates " << form_names[elem] << std::endl;
			break ;
		default:
			std::cout << "Intern: ";
			throw WrongFormName();
	}
	return (this->*forms_ptr[elem])(form_target);
}

Intern::Intern(const Intern &intern) {
	*this = intern;
}

Intern::~Intern() {

}

const char *Intern::WrongFormName::what() const throw() {
	return "Human being wont Non-existent form, sir";
}
