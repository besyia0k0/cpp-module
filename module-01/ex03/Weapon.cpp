/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:28:18 by hkong             #+#    #+#             */
/*   Updated: 2023/02/27 15:52:16 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type_) {
	type = type_;
	// std::cout << "+ Weapon " << type << " constructor called +" << std::endl;
}

Weapon::~Weapon() {
	// std::cout << "- Weapon " << type << " destructor called -" << std::endl;
}

const std::string &Weapon::getType(void) const {
	return type;
}

void	Weapon::setType(std::string new_type) {
	// std::cout << "* Weapon '" << type << "' changed to '" << new_type << "' *" << std::endl;
	type = new_type;
}