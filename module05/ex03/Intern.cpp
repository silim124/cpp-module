#include "Intern.hpp"

Intern::Intern()
{
}
Intern::~Intern()
{
}
Intern::Intern(Intern const &intern)
{
	*this = intern;
}
Intern &Intern::operator=(Intern const &intern)
{
	(void)intern;
	return (*this);
}
Form *Intern::makeForm(std::string const &form, std::string const &target)
{
	Form *newForm;

	if (form == "robotomy request")
		newForm = new RobotomyRequestForm(target);
	else if (form == "presidential pardon")
		newForm = new PresidentialPardonForm(target);
	else if (form == "shrubbery creation")
		newForm = new ShrubberyCreationForm(target);
	else
		throw Form::UnknownFormException();
	return (newForm);
}

std::ostream &operator<<(std::ostream &o, Intern const &intern)
{
	(void)intern;
	o << "나는 아무것도 아니야...ㅠ";
	return (o);
}
