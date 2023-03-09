/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:30:50 by hkong             #+#    #+#             */
/*   Updated: 2023/03/09 17:04:17 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
	std::cout << "---- Assignment test case started ----" << std::endl;
	{
		Fixed	a;
		Fixed	b(a);
		Fixed c;
		c = b;
		
		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
	}
	std::cout << "---------- Test End ----------" << std::endl;
	std::cout << "---- My test case started ----" << std::endl;
	{
		Fixed a;
		std::cout << a.getRawBits() << std::endl;
		a.setRawBits(42);
		std::cout << a.getRawBits() << std::endl;

		Fixed b(a);
		std::cout << b.getRawBits() << std::endl;
		b.setRawBits(24);
		std::cout << b.getRawBits() << std::endl;

		Fixed c;
		std::cout << c.getRawBits() << std::endl;
		c = b;
		std::cout << c.getRawBits() << std::endl;
	}
	std::cout << "---------- Test End ----------" << std::endl;
	
	return 0;
}