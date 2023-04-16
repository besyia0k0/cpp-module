/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:58:14 by hkong             #+#    #+#             */
/*   Updated: 2023/04/16 13:03:42 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	std::cout << YELLOW << "-------- Basic Function Test --------" << CLOSE << std::endl;
	{
		Cat cat1;
		Cat cat2;

		std::cout << "Cat 1: ";
		std::cout << cat1.getType() << std::endl;
		std::cout << "Cat 2: ";
		std::cout << cat2.getType() << std::endl;
		std::cout << "Cat 1: ";
		cat1.makeSound();
		std::cout << "Cat 2: ";
		cat2.makeSound();
		cat1.insertIdea(4, "hi");
		std::cout << "Cat 1: ";
		cat1.showIdeas();
		std::cout << "Cat 2: ";
		cat2.showIdeas();

		// copy assignment function test
		cat2 = cat1;
		std::cout << "Cat 1: ";
		cat1.showIdeas();
		std::cout << "Cat 2: ";
		cat2.showIdeas();
		
		// deep copy test
		cat2.insertIdea(2, "meow!");
		std::cout << "Cat 1: ";
		cat1.showIdeas();
		std::cout << "Cat 2: ";
		cat2.showIdeas();
	}
	std::cout << YELLOW << "---------------- Test Fin ----------------" << CLOSE << std::endl;
	std::cout << YELLOW << "-------- Assign and Free Test --------" << CLOSE << std::endl;
	{
		const Animal* array[4];
	
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

