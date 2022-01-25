#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat	a("a", 137);
	Bureaucrat	b("b", 1);
	std::cout << std::endl;

	std::cout << a;
	std::cout << b << std::endl;

	Form *f1 = new ShrubberyCreationForm("shrubbery");
	Form *f2 = new RobotomyRequestForm("Robot");
	Form *f3 = new PresidentialPardonForm("President");

	std::cout << *f1 << std::endl;
	std::cout << *f2 << std::endl;
	std::cout << *f3 << std::endl;
	std::cout << std::endl;

	b.signForm(*f1);
	b.signForm(*f2);
	b.signForm(*f3);
	std::cout << std::endl;
	b.executeForm(*f1);
	b.executeForm(*f2);
	b.executeForm(*f3);
	std::cout << std::endl;

	delete f1;
	delete f2;
	delete f3;

	return 0;
}
