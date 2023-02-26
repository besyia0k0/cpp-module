/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:32:48 by hkong             #+#    #+#             */
/*   Updated: 2023/02/26 15:46:21 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon_(weapon), name_(name) { }

void	HumanA::attack(void) {
	std::cout << name_ << " attacks with their " << weapon_.getType() << std::endl;
}