
#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>
#include <cstdlib>

class ShrubberyCreationForm : public Form {
private:
	ShrubberyCreationForm();
	std::string m_target;
public:
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	void execute(const Bureaucrat &executor) const;
	virtual std::string const & getTarget() const;
	ShrubberyCreationForm &operator= (const ShrubberyCreationForm &other);
};

#endif
