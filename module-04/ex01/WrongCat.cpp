/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:35:44 by hkong             #+#    #+#             */
/*   Updated: 2023/04/16 13:17:58 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): Animal("WrongCat") {
	std::cout << GREEN << "+ [ WrongCat ] Default Constructor called +" << CLOSE << std::endl;
	brain = new Brain();
}

WrongCat::WrongCat(const WrongCat& wrongCat): Animal("WrongCat") {
	std::cout << GREEN << "+ [ WrongCat ] Copy Constructor called +" << CLOSE << std::endl;
	brain = new Brain();
	*this = wrongCat;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongCat) {
	std::cout << GREEN << "= [ WrongCat ] Copy Assignment Operator called =" << CLOSE << std::endl;
	if (this != &wrongCat) {
		type = wrongCat.type;

		delete brain;
		brain = wrongCat.brain;
	}
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << GREEN << "- [ WrongCat ] Destructor called -" << CLOSE << std::endl;
	delete brain;
}

void	WrongCat::makeSound(void) const {
	std::cout << "[ WrongCat ]: meow meow ~" << std::endl;
}

void	WrongCat::showIdeas(void) const {
	brain->showIdeas();
}

void	WrongCat::insertIdea(int index, std::string idea) {
	brain->insertIdea(index, idea);
}
