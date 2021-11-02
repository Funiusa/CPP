#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <ostream>
#include <execution>

Bureaucrat::Bureaucrat(): m_name("\x1B[33mstandard bureaucrat\033[0m"), m_grade(150) {
	std::cout << "Constructor default" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int mGrade) : m_name("\x1B[33m" + name + "\033[0m"), m_grade(mGrade) {
	if (m_grade > 150) {
		GradeTooLowException();
	}
	else if (m_grade < 1) {
		GradeTooHighException();
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat)
: m_name(bureaucrat.m_name) {
	std::cout << "Copy constructor" << std::endl;
	m_grade = bureaucrat.m_grade;
	*this = bureaucrat;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	std::cout << "Assignment operator" << std::endl;
	if (this == &bureaucrat)
		return *this;
	m_grade = bureaucrat.m_grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat live on dinner...forever" << std::endl;
}

std::string Bureaucrat::getName() const {
	return m_name;
}

int Bureaucrat::getGrade() const {
	return this->m_grade;
}

void Bureaucrat::incGrade() {
	if (this->m_grade == 150 || this->m_grade > 150)
		throw GradeTooLowException();
	this->m_grade++;
}

void Bureaucrat::decGrade() {
	if (this->m_grade == 1 || this->m_grade < 1)
		throw GradeTooHighException();
	this->m_grade--;
}

void Bureaucrat::signedForm(Form &form) const {
	try {
		if (!form.beSigned(*this))
			std::cout << m_name << " signed: \n" << form << std::endl;
	}
	catch (std::exception &e) {
		std::cout << m_name << " not sign " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form &form) {
	if (form.getExec() < this->m_grade) {
		std::cout << this->getName() << ": ";
		throw Form::GradeTooHighException();
	}
	try {
		form.execute(*this);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "LOW";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "HIGH";
}

std::ostream & operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return out;
}
