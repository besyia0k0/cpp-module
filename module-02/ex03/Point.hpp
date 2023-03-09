/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:12:41 by hkong             #+#    #+#             */
/*   Updated: 2023/03/09 15:53:53 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
class Point {
	private:
		Fixed	x;
		Fixed	y;
		
	public:
		Point();
		Point(const float x_, const float y_);
		Point(const Point& point);
		Point& operator=(const Point& point);
		~Point();

		Fixed	getPointX(void) const;
		Fixed	getPointY(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif