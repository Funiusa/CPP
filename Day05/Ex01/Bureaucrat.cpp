#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <ostream>

Bureaucrat::Bureaucrat(): m_name("standard bureaucrat"), m_grade(150) {
	std::cout << "Constructor default" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int mGrade) : m_name(name), m_grade(mGrade) {
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
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	std::cout << "Assignment operator" << std::endl;
	if (this == &bureaucrat)
		return *this;
	m_grade = bureaucrat.m_grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor" << std::endl;
}

std::string Bureaucrat::getName() const {
	return m_name;
}

int Bureaucrat::getGrade() const {
	return this->m_grade;
}

void Bureaucrat::incGrade() {
	if (this->m_grade > 150)
		throw GradeTooLowException();
	this->m_grade++;
}

void Bureaucrat::decGrade() {
	this->m_grade--;
	if (this->m_grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::signedForm(Form &form) const {
	try {
		form.beSigned(*this);
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

