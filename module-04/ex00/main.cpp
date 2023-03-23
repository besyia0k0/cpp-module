/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:58:14 by hkong             #+#    #+#             */
/*   Updated: 2023/03/23 17:47:06 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << YELLOW << "-------- Basic Function Test --------" << CLOSE << std::endl;
	{
		const Animal* meta = new Animal();
		const Cat* cat = new Cat();
		const Dog* dog = new Dog();

		std::cout << meta->getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		std::cout << dog->getType() << std::endl;
		meta->makeSound();
		cat->makeSound();
		dog->makeSound();

		delete meta;
		delete cat;
		delete dog;
	}
	{
		const	WrongAnimal* wrongMeta = new WrongAnimal();
		const	WrongCat*	wrongCat = new WrongCat();
		std::cout << wrongMeta->getType() << std::endl;
		std::cout << wrongCat->getType() << std::endl;
		wrongMeta->makeSound();
		wrongCat->makeSound();
		
		delete wrongMeta;
		delete wrongCat;
	}
	std::cout << YELLOW << "---------------- Test Fin ----------------" << CLOSE << std::endl;
	std::cout << YELLOW << "-------- Correct Implementation Test --------" << CLOSE << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* cat = new Cat();
		const Animal* dog = new Dog();

		std::cout << meta->getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		std::cout << dog->getType() << std::endl;
		meta->makeSound();
		cat->makeSound();
		dog->makeSound();

		delete meta;
		delete cat;
		delete dog;
	}
	std::cout << YELLOW << "---------------- Test Fin ----------------" << CLOSE << std::endl;
	std::cout << YELLOW << "-------- Wrong Implementation Test --------" << CLOSE << std::endl;
	{
		const WrongAnimal* wrongMeta = new WrongAnimal();
		const WrongAnimal* wrongCat = new WrongCat();

		std::cout << wrongMeta->getType() << std::endl;
		std::cout << wrongCat->getType() << std::endl;
		wrongMeta->makeSound();
		wrongCat->makeSound();

		delete wrongMeta;
		delete wrongCat;
	}
	std::cout << YELLOW << "---------------- Test Fin ----------------" << CLOSE << std::endl;
	return 0;
}

