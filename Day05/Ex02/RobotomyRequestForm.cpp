#include "RobotomyRequesrForm.hpp"
#include "Form.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: Form("RobotomyRequestForm", 72, 45), m_target(target) {

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
: Form(other) {
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {

	if (executor.getGrade() > this->getExec()) {
		std::cout << executor.getName() << ": ";
		throw Form::GradeTooLowException();
	}
	else if (!this->getNoun()) {
		std::cout << executor.getName() << ": ";
		throw Form::NotSignedException();
	}
	else if (this->getNoun()) {
		std::cout << executor.getName() << " execute form " << m_target << ": "
		<< "\n\x1B[34m***#$@$@%@$$ .... Life? Don't talk to me about life..... $* @$) @$#(*%\033[0m"
		<< std::endl;
		if (std::rand() % 2 == 1)
			std::cout << this->m_target
			<< " \x1B[35mhas been robotomized successfully 50% of the time.\033[0m" << std::endl;
		else {
			throw RobotomyRequestFormException();
		}
	}
}

std::string const &RobotomyRequestForm::getTarget() const {
	return this->m_target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	if (this == &other)
		return *this;
	*this = other;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

const char *RobotomyRequestForm::RobotomyRequestFormException::what() const throw() {
	return ("\x1B[31mRobotimization failure. I think you ought to know I'm feeling very depressed.\033[0m");
}
