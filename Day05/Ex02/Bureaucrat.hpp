
#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP
#include <iostream>
#include <ostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;
class Bureaucrat;

class Bureaucrat {
private:
	const std::string m_name;
	int m_grade;
public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const &bureaucrat);
	Bureaucrat(const std::string& name, int mGrade);
	Bureaucrat & operator= (const Bureaucrat &bureaucrat);

	virtual ~Bureaucrat();
	std::string getName() const;
	int getGrade() const;
	void incGrade();
	void decGrade();
	void signedForm(Form &form) const;
	void executeForm(Form &form);

	class GradeTooLowException: public std::exception {
	public:
		GradeTooLowException() {};
		virtual ~GradeTooLowException() throw() {};
		const char * what() const throw();
	};

	class GradeTooHighException: public std::exception {
	public:
		GradeTooHighException() {};
		virtual ~GradeTooHighException() throw() {};
		const char *what() const throw();
	};
};

	std::ostream &operator<< (std::ostream &out, const Bureaucrat &bureaucrat);

#endif
