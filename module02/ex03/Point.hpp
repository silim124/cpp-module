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

		Fixed	get_x(void) const;
		Fixed	get_y(void) const;

		~Point();
	private:
		Fixed const _x;
		Fixed const _y;

		Point & operator=(Point const & point);
};

#endif
