/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:04:05 by silim             #+#    #+#             */
/*   Updated: 2022/01/29 16:17:41 by silim            ###   ########.fr       */
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

		int		getRawBits() const;
		void	setRawBits(const int raw);
		int		toInt(void) const;
		float	toFloat(void) const;

		~Fixed();
	private:
		int					_value;
		const static int	_bits;
};

std::ostream &	operator<<(std::ostream & s, const Fixed & fixed);

#endif
