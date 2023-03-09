/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:12:31 by hkong             #+#    #+#             */
/*   Updated: 2023/03/09 16:11:48 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

static int	checkTriangle(Point const a, Point const b, Point const c) {
	Fixed	grad_ab;
	Fixed	grad_bc;
	Fixed	grad_ac;
	int		count = 0;

	grad_ab = (a.getPointY() - b.getPointY()) / (a.getPointX() - b.getPointX());
	grad_bc = (b.getPointY() - c.getPointY()) / (b.getPointX() - c.getPointX());
	grad_ac = (a.getPointY() - c.getPointY()) / (a.getPointX() - c.getPointX());

	if (grad_ab == grad_ac)
		count++;
	if (grad_ab == grad_bc)
		count++;
	if (grad_ac == grad_bc)
		count++;
	if (count)
		return false;
	return true;
}

static int	getBoolArea(Point const line_a, Point const line_b, Point const point) {
	Fixed	result;
	Fixed	zero(0);

	result = (point.getPointX() - line_a.getPointX()) * (line_a.getPointY() - line_b.getPointY()) \
						- (point.getPointY() - line_a.getPointY()) * (line_a.getPointX() - line_b.getPointX());
	if (result == zero)
		return 2;
	if (result > zero)
		return 1;
	return 0;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	if (!checkTriangle(a, b, c)) {
		std::cout << "The input is NOT triangle" << std::endl;
	}
	if ((getBoolArea(a, b, c) == getBoolArea(a, b, point)) && \
				(getBoolArea(b, c, a) == getBoolArea(b, c, point)) && \
				(getBoolArea(a, c, b) == getBoolArea(a, c, point)))
		return true;
	return false;
}