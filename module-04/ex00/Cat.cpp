/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:35:44 by hkong             #+#    #+#             */
/*   Updated: 2023/03/23 16:22:03 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
	std::cout << GREEN << "+ [ Cat ] Default Constructor called +" << CLOSE << std::endl;
}

Cat::Cat(const Cat& cat) {
	std::cout << GREEN << "+ [ Cat ] Copy Constructor called +" << CLOSE << std::endl;
	*this = cat;
}

Cat& Cat::operator=(const Cat& cat) {
	std::cout << GREEN << "= [ Cat ] Copy Assignment Operator called =" << CLOSE << std::endl;
	type = cat.type;
	return *this;
}

Cat::~Cat() {
	std::cout << GREEN << "- [ Cat ] Destructor called -" << CLOSE << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "[ Cat ]: meow meow ~" << std::endl;
}