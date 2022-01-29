/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:18:24 by silim             #+#    #+#             */
/*   Updated: 2022/01/29 16:18:26 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(Point const & point);
		Point(Fixed const x, Fixed const y);
		Point(const float _x, const float _y);

		Fixed	getX(void) const;
		Fixed	getY(void) const;

		~Point();
	private:
		Fixed const _x;
		Fixed const _y;

		Point & operator=(Point const & point);
};
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
