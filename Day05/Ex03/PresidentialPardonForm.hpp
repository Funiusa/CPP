
#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
		PresidentialPardonForm();
		std::string m_target;
	public:
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		void execute(const Bureaucrat &executor) const;
		virtual std::string const & getTarget() const;
		PresidentialPardonForm &operator= (const PresidentialPardonForm &other);

		class PresidentialPardonFormException : public std::exception {
		public:
			PresidentialPardonFormException() throw() {};
			virtual ~PresidentialPardonFormException() throw() {};
			virtual const char* what() const throw();
		};
};

#endif
