/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:58:14 by hkong             #+#    #+#             */
/*   Updated: 2023/03/23 15:32:42 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << "-------- Correct Implementation Test --------" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* cat = new Cat();
		const Animal* dog = new Dog();

		std::cout << meta->getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		std::cout << dog->getType() << std::endl;
		meta->makeSound();
		cat->makeSound(); //will output the cat sound!
		dog->makeSound();
	}
	std::cout << "---------------- Test Fin ----------------" << std::endl;
	std::cout << "-------- Wrong Implementation Test --------" << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* cat = new WrongCat();

		std::cout << meta->getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		meta->makeSound();
		cat->makeSound();
	}
	std::cout << "---------------- Test Fin ----------------" << std::endl;
	return 0;
}