#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat{

	private:
		const	std::string		_name;
		int						_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(int	grade);
		Bureaucrat(std::string name, int grade);

		Bureaucrat& operator=(const Bureaucrat& bureaucrat);
		Bureaucrat(const Bureaucrat& bureaucrat);

		std::string		getName() const;
		int				getGrade() const;
		void			setGrade(int grade);

		void			incrementGrade();
		void			decrementGrade();

		class GradeTooHighException: public std::exception{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
				const char* what() const throw();
		};

		~Bureaucrat();
};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif
