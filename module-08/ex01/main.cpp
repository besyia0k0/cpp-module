/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:21:43 by hkong             #+#    #+#             */
/*   Updated: 2023/06/08 16:24:15 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << YELLOW << "----------- Basic Test -----------" << CLOSE << std::endl;
	try {
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.printAll();
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Largest Span: " << sp.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << YELLOW << "----------- Size Test -----------" << CLOSE << std::endl;
	try {
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(42);
		sp.printAll();
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Largest Span: " << sp.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << YELLOW << "----------- Empty Test -----------" << CLOSE << std::endl;
	try {
		Span sp = Span(5);

		sp.addNumber(42);
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Largest Span: " << sp.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << YELLOW << "----------- Iter Size Test -----------" << CLOSE << std::endl;
	try {
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		Span largeSp = Span(7);
		largeSp.addNumber(1);
		largeSp.addNumber(5);
		largeSp.addNumber(7);
		largeSp.addNumber(sp.begin(), sp.end());
		largeSp.printAll();
		std::cout << "Shortest Span: " << largeSp.shortestSpan() << std::endl;
		std::cout << "Largest Span: " << largeSp.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << YELLOW << "----------- Iter Test -----------" << CLOSE << std::endl;
	try {
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		Span largeSp = Span(10);
		largeSp.addNumber(1);
		largeSp.addNumber(5);
		largeSp.addNumber(7);
		largeSp.addNumber(sp.begin(), sp.end());
		largeSp.printAll();
		std::cout << "Shortest Span: " << largeSp.shortestSpan() << std::endl;
		std::cout << "Largest Span: " << largeSp.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << YELLOW << "----------- Test Fin -----------" << CLOSE << std::endl;

	return 0;
}