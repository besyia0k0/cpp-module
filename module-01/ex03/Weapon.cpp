/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:28:18 by hkong             #+#    #+#             */
/*   Updated: 2023/02/26 15:53:42 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	type_ = type;
}

const std::string &Weapon::getType(void) const {
	return type_;
}

void	Weapon::setType(std::string new_type) {
	type_ = new_type;
}