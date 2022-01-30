/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:04:05 by silim             #+#    #+#             */
/*   Updated: 2022/01/29 17:38:10 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed &	operator=(const Fixed &fixed);

		int		getRawBits() const;
		void	setRawBits(int const raw);

		~Fixed();
	private:
		int					_value;
		const static int	_bits;
};

#endif
