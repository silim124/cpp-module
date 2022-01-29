/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:17:36 by silim             #+#    #+#             */
/*   Updated: 2022/01/29 16:17:37 by silim            ###   ########.fr       */
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

Fixed &	Fixed::operator=(const Fixed &fixed){
	std::cout << "Assignation operation called" << std::endl;
	_value = fixed._value;
	return (*this);
};

int		Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
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

std::ostream&	operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
