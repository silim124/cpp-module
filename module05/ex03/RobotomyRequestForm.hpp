#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <stdlib.h>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	std::string	_target;
public:
	RobotomyRequestForm(std::string const target);

	RobotomyRequestForm(const RobotomyRequestForm& f);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& f);

	std::string const	getTarget() const;
	void				execute(Bureaucrat &b);

	~RobotomyRequestForm();
};

#endif
