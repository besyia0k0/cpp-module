/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:22:09 by hkong             #+#    #+#             */
/*   Updated: 2023/03/23 15:25:15 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal") {
	std::cout << "+ [ WrongAnimal ] Default Constructor called +" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type_): type(type_) {
	std::cout << "+ [ WrongAnimal ] " << type << " Constructor called +" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal) {
	std::cout << "+ [ WrongAnimal ] " << type << " Copy Constructor called +" << std::endl;
	*this = wrongAnimal;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrongAnimal) {
	std::cout << "= [ WrongAnimal ] " << type << " Copy Assignment Operator called =" << std::endl;
	type = wrongAnimal.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "- [ WrongAnimal ] " << type << " Destructor called -" << std::endl;
}

std::string	WrongAnimal::getType(void) const {
	return type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "[ WrongAnimal ]: (WrongAnimal Default Sound)" << std::endl;
}