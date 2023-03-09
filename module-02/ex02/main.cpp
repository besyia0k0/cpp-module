/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:30:50 by hkong             #+#    #+#             */
/*   Updated: 2023/03/09 19:18:25 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
	std::cout << "---- Assignment test case started ----" << std::endl;
	{
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;
	}
	std::cout << "---------- Test End ----------" << std::endl;
	std::cout << "---- My test case started ----" << std::endl;
	{
		Fixed const a(4.2f);
		Fixed const b(10);

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "a + b: " << a + b << std::endl;
		std::cout << "a - b: " << a - b << std::endl;
		std::cout << "a * b: " << a * b << std::endl;
		std::cout << "a / b: " << a / b << std::endl;
		std::cout << "a and b are " << (a == b ? "same" : "different") << std::endl;
		std::cout << "a is " << (a >= b ? "bigger or equal" : "smaller") << std::endl;
		std::cout << "min: " << Fixed::min(a, b) << std::endl;
		std::cout << "max: " << Fixed::max(a, b) << std::endl;
	}
	std::cout << "---------- Test End ----------" << std::endl;
	
	return 0;
}