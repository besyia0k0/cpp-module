/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:35:44 by hkong             #+#    #+#             */
/*   Updated: 2023/03/23 15:21:24 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
	std::cout << "+ [ Cat ] Default Constructor called +" << std::endl;
}

Cat::Cat(const Cat& cat) {
	std::cout << "+ [ Cat ] Copy Constructor called +" << std::endl;
	*this = cat;
}

Cat& Cat::operator=(const Cat& cat) {
	std::cout << "= [ Cat ] Copy Assignment Operator called =" << std::endl;
	type = cat.type;
	return *this;
}

Cat::~Cat() {
	std::cout << "- [ Cat ] Destructor called -" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "[ Cat ]: meow meow ~" << std::endl;
}