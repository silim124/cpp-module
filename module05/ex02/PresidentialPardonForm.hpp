#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
	std::string	_target;
public:
	PresidentialPardonForm(std::string const target);
	~PresidentialPardonForm();

	PresidentialPardonForm(const PresidentialPardonForm& f);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& f);

	std::string const	getTarget() const;
	void				execute(Bureaucrat &b);
};

#endif
