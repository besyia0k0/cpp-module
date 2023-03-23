/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:22:09 by hkong             #+#    #+#             */
/*   Updated: 2023/03/23 16:23:36 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal") {
	std::cout << GREEN << "+ [ WrongAnimal ] Default Constructor called +" << CLOSE << std::endl;
}

WrongAnimal::WrongAnimal(std::string type_): type(type_) {
	std::cout << GREEN << "+ [ WrongAnimal ] " << type << " Constructor called +" << CLOSE << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal) {
	std::cout << GREEN << "+ [ WrongAnimal ] " << type << " Copy Constructor called +" << CLOSE << std::endl;
	*this = wrongAnimal;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrongAnimal) {
	std::cout << GREEN << "= [ WrongAnimal ] " << type << " Copy Assignment Operator called =" << CLOSE << std::endl;
	type = wrongAnimal.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << GREEN << "- [ WrongAnimal ] " << type << " Destructor called -" << CLOSE << std::endl;
}

std::string	WrongAnimal::getType(void) const {
	return type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "[ WrongAnimal ]: (WrongAnimal Default Sound)" << std::endl;
}