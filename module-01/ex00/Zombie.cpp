/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:14:58 by hkong             #+#    #+#             */
/*   Updated: 2023/02/24 22:18:51 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	name_ = "default";
	std::cout << "+ Zombie " << name_ << " constructor called +" << std::endl;
}

Zombie::Zombie(std::string name) {
	name_ = name;
	std::cout << "+ Zombie " << name_ << " constructor called +" << std::endl;

}

Zombie::~Zombie() {
	std::cout << "- Zombie " << name_ << " destructor called -" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}