/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:22:05 by hkong             #+#    #+#             */
/*   Updated: 2023/03/23 15:28:02 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat") {
	std::cout << "+ [ WrongCat ] Default Constructor called +" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrongCat) {
	std::cout << "+ [ WrongCat ] Copy Constructor called +" << std::endl;
	*this = wrongCat;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongCat) {
	std::cout << "= [ WrongCat ] Copy Assignment Operator called =" << std::endl;
	type = wrongCat.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "- [ WrongCat ] Destructor called -" << std::endl;
}

void	WrongCat::makeSound(void) const {
	std::cout << "[ WrongCat ]: meow meow ~" << std::endl;
}