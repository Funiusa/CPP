
#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>
#include <ostream>

class Bureaucrat;
class Form;

class Form {
private:
	const std::string m_name;
	bool m_noun;
	const int m_sign;
	const int m_exec;
public:

	// Construction & Destruction
	Form(std::string name, const int sign, const int exec);
	Form(const Form &form);
	virtual ~Form();
	// Functions
	const std::string &getName() const;

	bool getNoun() const;
	int getSign() const;
	int getExec() const;
	virtual std::string const &getTarget() const = 0;
	int beSigned(Bureaucrat const &bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;

	// Exception High
	class GradeTooHighException : public std::exception {
		public:
			GradeTooHighException() throw() {};
			virtual ~GradeTooHighException() throw() {};
			virtual const char* what() const throw();
	};

	// Exception Low
	class GradeTooLowException : public std::exception {
		public:
			GradeTooLowException() throw() {};
			virtual ~GradeTooLowException() throw() {};
			virtual const char* what() const throw();
	};

	// Exception Not Signed
	class NotSignedException : public std::exception {
	public:
		NotSignedException() throw() {};
		virtual ~NotSignedException() throw() {};
		virtual const char* what() const throw();
	};

	Form & operator= (const Form &form);
};


std::ostream & operator<< (std::ostream &out, const Form &form);


#endif //EX01_FORM_HPP
