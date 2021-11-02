
#ifndef EX02_ROBOTOMYREQUESRFORM_HPP
#define EX02_ROBOTOMYREQUESRFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
	RobotomyRequestForm();
	std::string m_target;
public:
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	void execute(const Bureaucrat &executor) const;
	virtual std::string const & getTarget() const;
	RobotomyRequestForm &operator= (const RobotomyRequestForm &other);

	class RobotomyRequestFormException : public std::exception {
	public:
		RobotomyRequestFormException() throw() {};
		virtual ~RobotomyRequestFormException() throw() {};
		virtual const char* what() const throw();
	};
};




#endif
