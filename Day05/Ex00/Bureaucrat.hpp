
#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP
#include <iostream>
#include <ostream>
#include <string>
#include <exception>

class Bureaucrat {
private:
	std::string m_name;
	int m_grade;
public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const &bureaucrat);
	Bureaucrat(const std::string& name, int mGrade);
	Bureaucrat & operator= (const Bureaucrat &bureaucrat);

	virtual ~Bureaucrat();
	std::string getName();
	int getGrade();
	void incGrade();
	void decGrade();

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

	std::ostream &operator<< (std::ostream &out, Bureaucrat bureaucrat);

#endif
