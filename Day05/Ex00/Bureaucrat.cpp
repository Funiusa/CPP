
#include "Bureaucrat.hpp"

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

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat): m_name(bureaucrat.m_name), m_grade(bureaucrat.m_grade) {
	std::cout << "Copy constructor" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	std::cout << "Assignment operator" << std::endl;
	if (this == &bureaucrat)
		return *this;
	m_name = bureaucrat.m_name;
	m_grade = bureaucrat.m_grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor" << std::endl;
}

std::string Bureaucrat::getName() {
	return this->m_name;
}

int Bureaucrat::getGrade() {
	return this->m_grade;
}

void Bureaucrat::incGrade() {
	if (this->m_grade == 150)
		throw GradeTooLowException();
	this->m_grade++;
}

void Bureaucrat::decGrade() {
	if (this->m_grade == 1)
		throw GradeTooHighException();
	this->m_grade--;

}

std::ostream &operator<<(std::ostream &out, Bureaucrat bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return out;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "LOW";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "HIGH";
}

