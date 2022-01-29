/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:17:49 by silim             #+#    #+#             */
/*   Updated: 2022/01/29 16:29:52 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(){
	_value = 0;
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int value){
	_value = value << _bits;
	std::cout << "Int constructor called" << std::endl;
};

Fixed::Fixed(const float value)
{
	_value = roundf(value * (1 << _bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed){
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
};

int		Fixed::getRawBits() const{
	return _value;
};

void	Fixed::setRawBits(int const raw){
	_value = raw;
};

int	Fixed::toInt(void) const
{
	return (_value >> _bits);
}

float	Fixed::toFloat(void) const
{
	return (float(_value) / (1 << _bits));
}

Fixed::~Fixed(){
	std::cout << "Destrutor called" << std::endl;
};

Fixed &	Fixed::min(Fixed & f1, Fixed & f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed const &	Fixed::min(Fixed const & f1, Fixed const & f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed &	Fixed::max(Fixed & f1, Fixed & f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

Fixed const &	Fixed::max(Fixed const & f1, Fixed const & f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

std::ostream &	operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

Fixed & Fixed::operator=(Fixed const & fixed)
{
	_value = fixed._value;
	return (*this);
}

bool	Fixed::operator>(Fixed const & fixed) const
{
	return (this->_value < fixed._value);
}

bool	Fixed::operator<(Fixed const & fixed) const
{
	return (this->_value > fixed._value);
}


bool	Fixed::operator>=(Fixed const & fixed) const
{
	return (this->_value >= fixed._value);
}

bool	Fixed::operator<=(Fixed const & fixed) const
{
	return (this->_value <= fixed._value);
}

bool	Fixed::operator==(Fixed const & fixed) const
{
	return (this->_value == fixed._value);
}

bool	Fixed::operator!=(Fixed const & fixed) const
{
	return (this->_value != fixed._value);
}

Fixed	Fixed::operator+(Fixed const & fixed) const
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & fixed) const
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed	Fixed::operator*(Fixed const & fixed) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & fixed) const
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed & Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	f(*this);

	this->_value++;
	return (f);
}

Fixed & Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	f(*this);

	this->_value--;
	return (f);
}
