/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:35:46 by hkong             #+#    #+#             */
/*   Updated: 2023/04/16 12:59:24 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog") {
	std::cout << GREEN << "+ [ Dog ] Default Constructor called +" << CLOSE << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog& dog): AAnimal("Dog") {
	std::cout << GREEN << "+ [ Dog ] Copy Constructor called +" << CLOSE << std::endl;
	brain = new Brain();
	*this = dog;
}

Dog& Dog::operator=(const Dog& dog) {
	std::cout << GREEN << "= [ Dog ] Copy Assignment Operator called =" << CLOSE << std::endl;
	if (this != &dog) {
		type = dog.type;

		delete brain;
		brain = new Brain(*(dog.brain));
	}
	return *this;
}

Dog::~Dog() {
	std::cout << GREEN << "- [ Dog ] Destructor called -" << CLOSE << std::endl;
	delete brain;
}

void	Dog::makeSound(void) const {
	std::cout << "[ Dog ]: woof woof !" << std::endl;
}

void	Dog::showIdeas(void) const {
	brain->showIdeas();
}

void	Dog::insertIdea(int index, std::string idea) {
	brain->insertIdea(index, idea);
}