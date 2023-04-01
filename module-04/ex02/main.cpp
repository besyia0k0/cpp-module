/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:58:14 by hkong             #+#    #+#             */
/*   Updated: 2023/04/01 16:28:30 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	std::cout << YELLOW << "-------- Basic Implement Test --------" << CLOSE << std::endl;
	{
		// AAnimal meta; // not allowed!
		AAnimal* cat1 = new Cat();

		std::cout << "Cat 1: ";
		std::cout << cat1->getType() << std::endl;
		std::cout << "Cat 1: ";
		cat1->makeSound();

		delete cat1;
	}
	std::cout << YELLOW << "---------------- Test Fin ----------------" << CLOSE << std::endl;
	std::cout << YELLOW << "-------- Assign and Free Test --------" << CLOSE << std::endl;
	{
		const AAnimal* array[4];
	
		std::cout << "-------- New --------"<< std::endl;
		for (int i = 0; i < 2; i++) {
			array[i] = new Cat();
			std::cout << "---- " << i << " ----" << std::endl;
		}
		for (int i = 2; i < 4; i++) {
			array[i] = new Dog();
			std::cout << "---- " << i << " ----" << std::endl;
		}

		std::cout << "-------- Delete --------"<< std::endl;
		for(int i = 0; i < 4; i++) {
			delete array[i];
			std::cout << "---- " << i << " ----" << std::endl;
		}
	}
	std::cout << YELLOW << "---------------- Test Fin ----------------" << CLOSE << std::endl;
	return 0;
}

