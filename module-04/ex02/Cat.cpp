/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:35:44 by hkong             #+#    #+#             */
/*   Updated: 2023/04/16 13:06:55 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): AAnimal("Cat") {
	std::cout << GREEN << "+ [ Cat ] Default Constructor called +" << CLOSE << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat& cat): AAnimal("Cat") {
	std::cout << GREEN << "+ [ Cat ] Copy Constructor called +" << CLOSE << std::endl;
	brain = new Brain();
	*this = cat;
}

Cat& Cat::operator=(const Cat& cat) {
	std::cout << GREEN << "= [ Cat ] Copy Assignment Operator called =" << CLOSE << std::endl;
	if (this != &cat) {
		type = cat.type;
	
		delete brain;
		brain = new Brain(*(cat.brain));
	}
	return *this;
}

Cat::~Cat() {
	std::cout << GREEN << "- [ Cat ] Destructor called -" << CLOSE << std::endl;
	delete brain;
}

void	Cat::makeSound(void) const {
	std::cout << "[ Cat ]: meow meow ~" << std::endl;
}

void	Cat::showIdeas(void) const {
	brain->showIdeas();
}

void	Cat::insertIdea(int index, std::string idea) {
	brain->insertIdea(index, idea);
}
