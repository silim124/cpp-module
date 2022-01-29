/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:18:21 by silim             #+#    #+#             */
/*   Updated: 2022/01/29 16:18:21 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const Point & point) : _x(point._x), _y(point._y)
{
}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y)
{
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
}

Point::~Point()
{
}

Point &	Point::operator=(Point const & point)
{
	(void)point;
	return (*this);
}

Fixed	Point::getX(void) const
{
	return (_x);
}

Fixed	Point::getY(void) const
{
	return (_y);
}
