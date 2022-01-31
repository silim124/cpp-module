#ifndef __INTERN_HPP__
# define __INTERN_HPP__

# include <iostream>
# include <string>
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
	private:
		Form *_forms[3];

	public:
		Intern();
		~Intern();
		Intern(Intern const &intern);
		Intern &operator=(Intern const &intern);

		Form	*makeForm(std::string const &form, std::string const &target);
};

std::ostream &operator<<(std::ostream &o, Intern const &intern);

#endif
