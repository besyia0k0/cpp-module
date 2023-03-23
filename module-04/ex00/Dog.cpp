/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:35:46 by hkong             #+#    #+#             */
/*   Updated: 2023/03/23 15:43:48 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
	std::cout << GREEN << "+ [ Dog ] Default Constructor called +" << CLOSE << std::endl;
}

Dog::Dog(const Dog& dog) {
	std::cout << GREEN << "+ [ Dog ] Copy Constructor called +" << CLOSE << std::endl;
	*this = dog;
}

Dog& Dog::operator=(const Dog& dog) {
	std::cout << GREEN << "= [ Dog ] Copy Assignment Operator called =" << CLOSE << std::endl;
	type = dog.type;
	return *this;
}

Dog::~Dog() {
	std::cout << GREEN << "- [ Dog ] Destructor called -" << CLOSE << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "[ Dog ]: woof woof !" << std::endl;
}
