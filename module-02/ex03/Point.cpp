/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:12:39 by hkong             #+#    #+#             */
/*   Updated: 2023/03/05 00:16:41 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0) {}

Point::Point(const float x_, const float y_): x(x_), y(y_){}

Point::Point(const Point& point) {
	x = point.x;
	y = point.y;
}

Point& Point::operator=(const Point& point) {
	
	return *this;
}