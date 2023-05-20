/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:24:23 by hkong             #+#    #+#             */
/*   Updated: 2023/05/20 17:07:14 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) {
	std::cout << YELLOW << "----------- Default Array Test -----------" << CLOSE << std::endl;
	{
		Array<int> test;
		std::cout << "Size: " << test.size() << std::endl;
		test.printArray();
	}
	std::cout << YELLOW << "----------- Size Array Test -----------" << CLOSE << std::endl;
	{
		Array<int> test(5);
		
		std::cout << "Size: " << test.size() << std::endl;
		test.printArray();
	}
	std::cout << YELLOW << "----------- Copy Constructor Test -----------" << CLOSE << std::endl;
	{
		Array<int> test(5);
		for (unsigned int i = 0; i < test.size(); i++)
			test[i] = i + 1;
		std::cout << "test: ";
		test.printArray();

		Array<int> newTest(test);
		std::cout << "newTest: ";
		newTest.printArray();

		std::cout << "** change test array **" << std::endl;
		test[2] = 7;

		std::cout << "test: ";
		test.printArray();
		std::cout << "newTest: ";
		newTest.printArray();
	}
	std::cout << YELLOW << "----------- Copy Assignment Test 1: Different size -----------" << CLOSE << std::endl;
	{
		Array<int> test(5);
		Array<int> newTest(3);
		for (unsigned int i = 0; i < test.size(); i++)
			test[i] = i + 1;
		std::cout << "test: ";
		test.printArray();
		std::cout << "newTest: ";
		newTest.printArray();

		newTest = test;
		std::cout << "** copy test to newTest **" << std::endl;
		std::cout << "test: ";
		test.printArray();
		std::cout << "newTest: ";
		newTest.printArray();

		std::cout << "** change test array **" << std::endl;
		test[2] = 7;

		std::cout << "test: ";
		test.printArray();
		std::cout << "newTest: ";
		newTest.printArray();
	}
	std::cout << YELLOW << "----------- Copy Assignment Test 2: Same size -----------" << CLOSE << std::endl;
	{
		Array<int> test(5);
		Array<int> newTest(5);
		for (unsigned int i = 0; i < test.size(); i++)
			test[i] = i + 1;
		std::cout << "test: ";
		test.printArray();
		std::cout << "newTest: ";
		newTest.printArray();

		newTest = test;
		std::cout << "** copy test to newTest **" << std::endl;
		std::cout << "test: ";
		test.printArray();
		std::cout << "newTest: ";
		newTest.printArray();

		std::cout << "** change test array **" << std::endl;
		test[2] = 7;

		std::cout << "test: ";
		test.printArray();
		std::cout << "newTest: ";
		newTest.printArray();
	}
	std::cout << YELLOW << "----------- Test Fin -----------" << CLOSE << std::endl;
}