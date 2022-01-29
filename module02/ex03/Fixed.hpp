/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:04:05 by silim             #+#    #+#             */
/*   Updated: 2022/01/29 16:18:12 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(const int fixed);
		Fixed(const float fixed);
		Fixed(const Fixed &fixed);

		Fixed &	operator=(const Fixed &fixed);
		bool	operator>(Fixed const &fixed) const;
		bool	operator<(Fixed const &fixed) const;
		bool	operator>=(Fixed const &fixed) const;
		bool	operator<=(Fixed const &fixed) const;
		bool	operator==(Fixed const &fixed) const;
		bool	operator!=(Fixed const &fixed) const;
		Fixed	operator+(Fixed const &fixed) const;
		Fixed	operator-(Fixed const &fixed) const;
		Fixed	operator*(Fixed const &fixed) const;
		Fixed	operator/(Fixed const &fixed) const;
		Fixed &	operator++(void);
		Fixed	operator++(int);
		Fixed & operator--(void);
		Fixed	operator--(int);

		int		getRawBits() const;
		void	setRawBits(const int fixed);
		int		toInt(void) const;
		float	toFloat(void) const;

		static Fixed &			min(Fixed & f1, Fixed & f2);
		static Fixed const &	min(Fixed const & f1, Fixed const & f2);
		static Fixed &			max(Fixed & f1, Fixed & f2);
		static Fixed const &	max(Fixed const & f1, Fixed const & f2);

		~Fixed();
	private:
		int					_value;
		const static int	_bits;
};

std::ostream &	operator<<(std::ostream & s, const Fixed & fixed);

#endif
