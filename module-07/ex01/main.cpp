/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:18:51 by hkong             #+#    #+#             */
/*   Updated: 2023/05/22 19:28:09 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {
	std::cout << YELLOW << "----------- Test 1 -----------" << CLOSE << std::endl;
	{
		int size = 5;
		int array[size];

		for (int i = 0; i < size; i++) {
			array[i] = i + 1;
		}
		std::cout << "----------- before -----------" << std::endl;
		::iter(array, size, printAll);
		::iter(array, size, increase);
		std::cout << "----------- after -----------" << std::endl;
		::iter(array, size, printAll);
	}
	std::cout << YELLOW << "----------- Test 2 -----------" << CLOSE << std::endl;
	{
		int size = 5;
		std::string array[5] = {"hello", "my", "name", "is", "hkong"};

		::iter(array, size, addIter);
		::iter(array, size, printAll);
	}
	std::cout << YELLOW << "----------- Test 3 -----------" << CLOSE << std::endl;
	{
		int size = 5;
		const std::string array[5] = {"hello", "my", "name", "is", "hkong"};

		::iter(array, size, printAll);
	}
	std::cout << YELLOW << "----------- Test Fin -----------" << CLOSE << std::endl;
}