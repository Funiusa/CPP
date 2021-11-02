

#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP
#include "RobotomyRequesrForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
private:
	Intern(const Intern &intern);
	Intern &operator= (const Intern &intern);
public:
	Intern();
	~Intern();
	Form* makeForm(const std::string &form_name, const std::string &form_target) const;
	Form* MakeShrubberyForm(const std::string &target) const;
	Form* MakeRobotomyForm(const std::string &target) const;
	Form* MakePresidentialForm(const std::string &target) const;

	class WrongFormName : public std::exception {
		const char* what() const throw();
	};
};


#endif //EX03_INTERN_HPP
