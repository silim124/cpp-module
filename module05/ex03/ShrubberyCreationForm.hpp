#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm(std::string _target);
		ShrubberyCreationForm(const ShrubberyCreationForm& f);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& f);

		std::string		getTarget() const;
		void			execute(Bureaucrat &b);

		~ShrubberyCreationForm();
};

#endif
