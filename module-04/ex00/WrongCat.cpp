/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:22:05 by hkong             #+#    #+#             */
/*   Updated: 2023/03/23 16:21:19 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat") {
	std::cout << GREEN << "+ [ WrongCat ] Default Constructor called +" << CLOSE << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrongCat) {
	std::cout << GREEN << "+ [ WrongCat ] Copy Constructor called +" << CLOSE << std::endl;
	*this = wrongCat;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongCat) {
	std::cout << GREEN << "= [ WrongCat ] Copy Assignment Operator called =" << CLOSE << std::endl;
	type = wrongCat.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << GREEN << "- [ WrongCat ] Destructor called -" << CLOSE << std::endl;
}

void	WrongCat::makeSound(void) const {
	std::cout << "[ WrongCat ]: meow meow ~" << std::endl;
}