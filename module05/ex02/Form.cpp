/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 21:04:32 by silim             #+#    #+#             */
/*   Updated: 2022/02/01 21:31:28 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():
	_name("default"),
	_sign_grade(150),
	_grade(150),
	_sign(false)
{
}

Form::Form(const std::string name, int sign_grade, int grade ) : _name(name), _sign_grade(sign_grade), _grade(grade), _sign(false)
{
	if (_grade < 1 || _sign_grade < 1)
		throw Form::GradeTooHighException();
	if (_grade > 150 || _sign_grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& f) : _name(f._name), _sign_grade(f._sign_grade), _grade(f._grade), _sign(f._sign)
{
	std::cout << "Form 생성자를 호출하였습니다." << std::endl;
}

int	Form::getGrade() const
{
	return _grade;
}

int	Form::getSignGrade() const
{
	return _sign_grade;
}

bool	Form::getSign() const
{
	return _sign;
}

std::string	Form::getName() const
{
	return _name;
}

void	Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > _sign_grade)
		throw Form::GradeTooLowException();
	_sign = true;
}

Form::~Form()
{
	std::cout << "Form 소멸자를 호출하였습니다." << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("이미 최상위 등급입니다.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("이미 최하위 등급입니다.");
}

const char* Form::NoSignException::what() const throw()
{
	return ("서명을 하지 않았습니다.");
}

const char* Form::FileException::what() const throw()
{
	return ("파일을 열지 못했습니다.");
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
	os << f.getName() << "의 서명 가능 등급은 " << f.getSignGrade() << "이고, 등급은 " << f.getGrade() << "입니다.";
	return os;
}
