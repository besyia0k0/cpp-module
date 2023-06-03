/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:55:40 by hkong             #+#    #+#             */
/*   Updated: 2023/06/03 17:01:52 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void) {
	std::cout << YELLOW << "----------- Array Test -----------" << CLOSE << std::endl;
	{
		const std::array<int, 8> test = { 2, 6, 5, 9, 8, 4, 3, 1 };

		std::cout << "[ Success ]" << std::endl;
		::easyfindTest(test, 9);
		std::cout << "[ Fail ]" << std::endl;
		::easyfindTest(test, 10);
	}
	std::cout << YELLOW << "----------- Vector Test -----------" << CLOSE << std::endl;
	{
		std::vector<int> test;

		test.push_back(5);
		test.push_back(6);
		test.push_back(7);
		test.push_back(1);
		test.push_back(3);
		test.push_back(4);
		test.push_back(9);
		std::cout << "[ Success ]" << std::endl;
		::easyfindTest(test, 9);
		std::cout << "[ Fail ]" << std::endl;
		::easyfindTest(test, 10);
	}
	std::cout << YELLOW << "----------- Deque Test -----------" << CLOSE << std::endl;
	{
		std::deque<int> test;

		test.push_front(5);
		test.push_back(6);
		test.push_front(7);
		test.push_back(1);
		test.push_front(3);
		test.push_back(4);
		test.push_front(9);
		std::cout << "[ Success ]" << std::endl;
		::easyfindTest(test, 3);
		std::cout << "[ Fail ]" << std::endl;
		::easyfindTest(test, 10);
	}
	std::cout << YELLOW << "----------- List Test -----------" << CLOSE << std::endl;
	{
		std::list<int> test;

		test.push_front(5);
		test.push_back(6);
		test.push_front(7);
		test.push_back(1);
		test.push_front(3);
		test.push_back(4);
		test.push_front(9);
		std::cout << "[ Success ]" << std::endl;
		::easyfindTest(test, 3);
		std::cout << "[ Fail ]" << std::endl;
		::easyfindTest(test, 10);
	}
	std::cout << YELLOW << "----------- Test Fin -----------" << CLOSE << std::endl;
}