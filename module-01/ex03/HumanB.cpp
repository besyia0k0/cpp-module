/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:45:53 by hkong             #+#    #+#             */
/*   Updated: 2023/02/27 15:43:48 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_): weapon(NULL), name(name_) { }

void	HumanB::setWeapon(Weapon &weapon_) {
	weapon = &weapon_;
}

void	HumanB::attack(void) {
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks with their " << "** no weapon **" << std::endl;
}