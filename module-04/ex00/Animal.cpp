/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:58:11 by hkong             #+#    #+#             */
/*   Updated: 2023/03/23 16:22:53 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal") {
	std::cout << GREEN << "+ [ Animal ] Default Constructor called +" << CLOSE << std::endl;
}

Animal::Animal(std::string type_): type(type_) {
	std::cout << GREEN << "+ [ Animal ] " << type << " Constructor called +" << CLOSE << std::endl;
}

Animal::Animal(const Animal& animal) {
	std::cout << GREEN << "+ [ Animal ] " << type << " Copy Constructor called +" << CLOSE << std::endl;
	*this = animal;
}

Animal& Animal::operator=(const Animal& animal) {
	std::cout << GREEN << "= [ Animal ] " << type << " Copy Assignment Operator called =" << CLOSE << std::endl;
	type = animal.type;
	return *this;
}

Animal::~Animal() {
	std::cout << GREEN << "- [ Animal ] " << type << " Destructor called -" << CLOSE << std::endl;
}

std::string	Animal::getType(void) const {
	return type;
}

void	Animal::makeSound(void) const {
	std::cout << "[ Animal ]: (Animal Default Sound)" << std::endl;
}
