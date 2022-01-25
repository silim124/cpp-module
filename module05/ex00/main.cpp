#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat	a("abc", 150);
		std::cout << a << std::endl;

		a.incrementGrade();
		a.decrementGrade();
		a.decrementGrade();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat	b("b", 1);
		std::cout << b << std::endl;

		b.incrementGrade();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat	b("b", 200);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
