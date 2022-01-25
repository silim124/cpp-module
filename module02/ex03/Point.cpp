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

Point::~Point()
{
}

Point &	Point::operator=(Point const & point)
{
	(void)point;
	return (*this);
}

Fixed	Point::get_x(void) const
{
	return (_x);
}

Fixed	Point::get_y(void) const
{
	return (_y);
}
