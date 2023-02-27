/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:14:58 by hkong             #+#    #+#             */
/*   Updated: 2023/02/27 15:35:44 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	name = "default";
	std::cout << "+ Zombie " << name << " constructor called +" << std::endl;
}

Zombie::Zombie(std::string name_) {
	name = name_;
	std::cout << "+ Zombie " << name << " constructor called +" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "- Zombie " << name << " destructor called -" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name_) {
	name = name_;
}