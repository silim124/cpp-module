/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:30:24 by silim             #+#    #+#             */
/*   Updated: 2022/02/02 20:14:45 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert( void ){}

Convert::Convert(std::string str)
{
	if (!checkType(str)) // 만약 입력값이 올바르지 않으면
		throw Convert::WrongInput(); // WrongInput 예외를 발생시킨다.
	_input = str; // 입력값을 _input에 저장한다.
}

Convert::Convert(const Convert& convert)
{
	*this = convert;
}

Convert& Convert::operator=(const Convert& convert)
{
	this->_input = convert._input;
	return *this;
}

bool	Convert:: checkType(std::string str)
{
	char *p;
	double tmp;

	if (str.length() == 1 && isascii(str[0])) // 길이가 1이고, ascii로 변환되는 경우
		return true;
	tmp = std::strtod(str.c_str(), &p); // 숫자일 경우, 숫자로 변환
	if (*p == 0 || (*p == 'f' && *(p + 1) == 0)) // 숫자일 경우, 소수점이 없는지와 소수점이 있는지 확인
		return true;
	return false;
}

const char*	Convert::WrongInput::what() const throw()
{
	return "char / int / float / double 이 필요합니다.";
}

Convert::~Convert( void )
{
}

char	Convert::toChar() const
{
	return static_cast<char>(toDouble()); // toDouble()를 호출하여 반환값을 char로 변환한다.
}

float	Convert::toFloat() const
{
	return static_cast<float>(toDouble()); // toDouble()를 호출하여 반환값을 float로 변환한다.
}

int	Convert::toInt() const
{
	return static_cast<int>(toDouble()); // toDouble()를 호출하여 반환값을 int로 변환한다.
}

double	Convert::toDouble() const
{
	if(_input.length() == 1 && !isdigit(_input[0])) // 문자일 경우, 아스키인지 확인
		return static_cast<double>(_input[0]); // 문자를 숫자로 변환한다.
	else // 숫자일 경우, 숫자로 변환한다.
		return atof(_input.c_str()); // 숫자를 숫자로 변환한다.
}

void	Convert::printChar( void )
{
	if (!std::isnan(toFloat()) && !std::isinf(toFloat()) && !std::isprint(toChar()) && isascii(toFloat())) // 아스키인지 확인하고 출력할 수 있는 문자인지 확인
		std::cout << "char\t: Non displayable" << std::endl;
	else if (isprint(toChar()) && isascii(toFloat())) // 문자가 표시 가능한 경우
		std::cout << "char\t: '" << toChar() << "'" << std::endl;
	else // 문자가 표시 가능하지 않은 경우
		std::cout << "char\t: impossible" << std::endl;
}

void	Convert::printInt( void )
{
	if (std::isnan(toFloat()) || toDouble() >= std::numeric_limits<int>::max() || toDouble() <= std::numeric_limits<int>::min()) // 숫자가 아니거나, 정수로 변환할 수 없는 경우
		std::cout << "int\t: impossible" << std::endl;
	else // 정수로 변환할 수 있는 경우
		std::cout << "int\t: " << toInt() << std::endl;
}

void	Convert::printFloat( void )
{
	if (toFloat() - toInt() == 0) // 소수점이 없는 경우
		std::cout << "Float\t: " << toFloat() << ".0f" << std::endl;
	else
		std::cout << "Float\t: " << toFloat() << "f" << std::endl;
}

void	Convert::printDouble( void )
{
	if (toFloat() - toInt() == 0) // 소수점이 없는 경우
		std::cout << "Double\t: " << toDouble() << ".0" << std::endl;
	else
		std::cout << "Double\t: " << toDouble() << std::endl;
}

void	Convert::printAll( void )
{
	printChar();
	printInt();
	printFloat();
	printDouble();
}
