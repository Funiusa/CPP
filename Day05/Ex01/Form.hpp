
#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>
#include <ostream>

class Bureaucrat;
class Form;

class Form {
private:
	const std::string &m_name;
	bool m_noun;
	const int m_sign;
	const int m_exec;
public:
	Form(const std::string& name, const int sign, const int exec);
	Form(const Form &form);
	virtual ~Form();

	const std::string &getName() const;
	bool getNoun() const;
	int getSign() const;
	int getExec() const;

	Form & operator= (const Form &form);

	void beSigned(Bureaucrat const &bureaucrat);

	class GradeTooHighException : public std::exception {
	public:
		GradeTooHighException() throw() {};
		virtual ~GradeTooHighException() throw() {};
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		GradeTooLowException() throw() {};
		virtual ~GradeTooLowException() throw() {};
		virtual const char* what() const throw();
	};

};


std::ostream & operator<< (std::ostream &out, const Form &form);


#endif //EX01_FORM_HPP
