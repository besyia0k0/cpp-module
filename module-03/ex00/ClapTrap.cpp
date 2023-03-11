/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:05:55 by hkong             #+#    #+#             */
/*   Updated: 2023/03/10 01:11:47 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap(std::string name_): name(name_), hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << "+ Default constructor called +" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap) {
	std::cout << "+ Copy constructor called +" << std::endl;
	*this = clapTrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &clapTrap) {
	std::cout << "= Copy assignment operator called =" << std::endl;
	name = clapTrap.name;
	hit_points = clapTrap.hit_points;
	energy_points = clapTrap.energy_points;
	attack_damage = clapTrap.attack_damage;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "- Destructor called -" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	std::cout << "⚔️ ClapTrap " << name << " attacks " << target << \
		", causing " << attack_damage << " points of damage! ⚔️" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "😵 ClapTrap " << name << " takes " << amount << " damage. 😵" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "🩹 ClapTrap " << name << " repairs itself, it gets " << amount << " hit point back! 🩹" << std::endl;
}