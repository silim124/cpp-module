#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(){
	_value = 0;
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &fixed){
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
};

Fixed &	Fixed::operator=(const Fixed &fixed){
	std::cout << "Assignation operation called" << std::endl;
	_value = fixed.getRawBits();
	return (*this);
};

int		Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
};

void	Fixed::setRawBits(int const raw){
	_value = raw;
};

Fixed::~Fixed(){
	std::cout << "Destrutor called" << std::endl;
};
