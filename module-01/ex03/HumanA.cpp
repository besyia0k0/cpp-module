/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:32:48 by hkong             #+#    #+#             */
/*   Updated: 2023/02/27 15:41:23 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name_, Weapon &weapon_): weapon(weapon_), name(name_) { }

void	HumanA::attack(void) {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}