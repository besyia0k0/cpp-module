/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:58:11 by hkong             #+#    #+#             */
/*   Updated: 2023/04/01 16:20:45 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): type("AAnimal") {
	std::cout << GREEN << "+ [ AAnimal ] Default Constructor called +" << CLOSE << std::endl;
}

AAnimal::AAnimal(std::string type_): type(type_) {
	std::cout << GREEN << "+ [ AAnimal ] " << type << " Constructor called +" << CLOSE << std::endl;
}

AAnimal::AAnimal(const AAnimal& animal) {
	std::cout << GREEN << "+ [ AAnimal ] " << type << " Copy Constructor called +" << CLOSE << std::endl;
	*this = animal;
}

AAnimal& AAnimal::operator=(const AAnimal& animal) {
	std::cout << GREEN << "= [ AAnimal ] " << type << " Copy Assignment Operator called =" << CLOSE << std::endl;
	type = animal.type;
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << GREEN << "- [ AAnimal ] " << type << " Destructor called -" << CLOSE << std::endl;
}

std::string	AAnimal::getType(void) const {
	return type;
}
