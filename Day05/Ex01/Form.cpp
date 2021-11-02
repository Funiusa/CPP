
#include "Form.hpp"

Form::Form(const std::string& name, const int sign, const int exec)
: m_name(name), m_noun(false), m_sign(sign), m_exec(exec) {
	if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
	else if (sign < 0 || exec < 0)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &form)
: m_name(form.m_name), m_noun(form.m_noun), m_sign(form.m_sign), m_exec(form.m_exec) {
	if (form.m_sign > 150 || form.m_exec > 150)
		throw Form::GradeTooLowException();
	else if (form.m_sign < 0 || form.m_exec < 0)
		throw Form::GradeTooHighException();
}

Form::~Form() {
	std::cout << "Destructor" << std::endl;
}

Form &Form::operator= (const Form &form) {
	if (this == &form) { return (*this); }
	this->m_noun = form.m_noun;
	return (*this);
}

const std::string &Form::getName() const {
	return this->m_name;
}

bool Form::getNoun() const {
	return this->m_noun;
}

int Form::getSign() const {
	return this->m_sign;
}

int Form::getExec() const {
	return this->m_exec;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->m_sign)
		throw Form::GradeTooLowException();
	else if (m_noun) {
		std::cout << bureaucrat.getName() << ": "
		<< "\x1B[31mI didn't sign this form again!!! "
		"Do you think i have not work? I'm one of you!\033[0m" << std::endl;
	}
	else {
		std::cout << bureaucrat.getName() << ": "
		<< "\x1B[31mOkay i sign it, shut up!\033[0m" << std::endl;
		m_noun = true;
	}
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("\x1B[31mAre you bind? Grade too high!\033[0m");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("\x1B[31mAre you stupid or something? Grade too low!\033[0m");
}

std::ostream &operator<< (std::ostream& out, Form const &form) {
	std::cout << "=====================================================" << std::endl;
	out << form.getName() << "\t Noun: " << form.getNoun() << "; Sign: " << form.getSign()
	<< "; Exec: " << form.getExec() << "." << std::endl;
	std::cout << "=====================================================" << std::endl;
	return out;
}
