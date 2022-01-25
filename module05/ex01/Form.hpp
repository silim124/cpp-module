#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
		const	std::string		_name;
		const	int				_grade;
		const	int				_sign_grade;
		bool					_sign;

	public:
		Form(const std::string name, int grade, int sign_grade);
		Form(const Form& f);
		~Form();
		Form& operator=(const Form& f);
		std::string		getName() const;
		int				getGrade() const;
		int				getSignGrade() const;
		bool			getSign() const;
		void			beSigned(const Bureaucrat& b);

		class GradeTooHighException: public std::exception{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
				const char* what() const throw();
		};
};
std::ostream& operator<<(std::ostream &out, Form const &f);
#endif
