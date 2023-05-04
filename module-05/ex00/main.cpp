/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:33:36 by hkong             #+#    #+#             */
/*   Updated: 2023/05/05 00:34:30 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	std::cout << YELLOW << "----------- Basic Function Test -----------" << CLOSE << std::endl;
	{
		Bureaucrat first("first", 30);
		Bureaucrat second("second", 30);

		std::cout << first << std::endl;
		std::cout << second << std::endl;
		first.incrementGrade();
		second.decrementGrade();
		std::cout << first << std::endl;
		std::cout << second << std::endl;
	}
	std::cout << YELLOW << "---------------- Test Fin ----------------" << CLOSE << std::endl;
	std::cout << YELLOW << "-------- Construct Low Grade Test --------" << CLOSE << std::endl;
	{
		try {
			Bureaucrat a("low", 180);
			std::cout << a << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "-------- Construct High Grade Test --------" << CLOSE << std::endl;
	{
		try {
			Bureaucrat a("high", 0);
			std::cout << a << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "-------- Decrement Low Grade Test --------" << CLOSE << std::endl;
	{
		try {
			Bureaucrat a("low", 147);
			std::cout << a << std::endl;

			for (int i = 0; i < 5; i++) {
				a.decrementGrade();
			}
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "-------- Increment High Grade Test --------" << CLOSE << std::endl;
	{
		try {
			Bureaucrat a("high", 3);
			std::cout << a << std::endl;

			for (int i = 0; i < 5; i++) {
				a.incrementGrade();
			}
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "---------------- Test Fin ----------------" << CLOSE << std::endl;

	return 0;
}