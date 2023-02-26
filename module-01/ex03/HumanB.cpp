/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:45:53 by hkong             #+#    #+#             */
/*   Updated: 2023/02/26 15:58:20 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): weapon_(NULL), name_(name) { }

void	HumanB::setWeapon(Weapon &weapon) {
	weapon_ = &weapon;
}

void	HumanB::attack(void) {
	if (weapon_)
		std::cout << name_ << " attacks with their " << weapon_->getType() << std::endl;
	else
		std::cout << name_ << " attacks with their " << "** no weapon **" << std::endl;
}