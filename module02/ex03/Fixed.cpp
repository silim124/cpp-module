#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(){
	_value = 0;
};

Fixed::Fixed(const int value){
	_value = value << _bits;
};

Fixed::Fixed(const float value)
{
	_value = roundf(value * (1 << _bits));
}

Fixed::Fixed(const Fixed &fixed){
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
