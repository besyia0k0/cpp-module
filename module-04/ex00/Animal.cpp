/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:58:11 by hkong             #+#    #+#             */
/*   Updated: 2023/03/23 15:22:45 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal") {
	std::cout << "+ [ Animal ] Default Constructor called +" << std::endl;
}

Animal::Animal(std::string type_): type(type_) {
	std::cout << "+ [ Animal ] " << type << " Constructor called +" << std::endl;
}

Animal::Animal(const Animal& animal) {
	std::cout << "+ [ Animal ] " << type << " Copy Constructor called +" << std::endl;
	*this = animal;
}

Animal& Animal::operator=(const Animal& animal) {
	std::cout << "= [ Animal ] " << type << " Copy Assignment Operator called =" << std::endl;
	type = animal.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "- [ Animal ] " << type << " Destructor called -" << std::endl;
}

std::string	Animal::getType(void) const {
	return type;
}

void	Animal::makeSound(void) const {
	std::cout << "[ Animal ]: (Animal Default Sound)" << std::endl;
}
