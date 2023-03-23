/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:35:46 by hkong             #+#    #+#             */
/*   Updated: 2023/03/23 15:20:01 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
	std::cout << "+ [ Dog ] Default Constructor called +" << std::endl;
}

Dog::Dog(const Dog& dog) {
	std::cout << "+ [ Dog ] Copy Constructor called +" << std::endl;
	*this = dog;
}

Dog& Dog::operator=(const Dog& dog) {
	std::cout << "= [ Dog ] Copy Assignment Operator called =" << std::endl;
	type = dog.type;
	return *this;
}

Dog::~Dog() {
	std::cout << "- [ Dog ] Destructor called -" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "[ Dog ]: woof woof !" << std::endl;
}
