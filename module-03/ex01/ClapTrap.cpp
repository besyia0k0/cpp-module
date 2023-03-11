/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:05:55 by hkong             #+#    #+#             */
/*   Updated: 2023/03/11 20:28:50 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("default"), hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << GREEN << "+ ClapTrap Default constructor called +" << CLOSE << std::endl;
}

ClapTrap::ClapTrap(std::string name_): name(name_), hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << GREEN <<  "+ ClapTrap " << name << " constructor called +" << CLOSE << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap) {
	std::cout << GREEN << "+ ClapTrap Copy constructor called +" << CLOSE << std::endl;
	*this = clapTrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap) {
	std::cout << YELLOW << "= ClapTrap Copy assignment operator called =" << CLOSE << std::endl;
	name = clapTrap.name;
	hit_points = clapTrap.hit_points;
	energy_points = clapTrap.energy_points;
	attack_damage = clapTrap.attack_damage;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << GREEN << "- ClapTrap " << name << " destructor called -" << CLOSE << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (!hit_points || !energy_points) {
		std::cout << RED << "[ERROR] ClapTrap " << name << " tried to attack, but " << CLOSE;
		if (!hit_points)
			std::cout << RED << "ClapTrap " << name << " is already died. 😕" << CLOSE << std::endl; 
		else if (!energy_points)
			std::cout << RED << "ClapTrap " << name << " is out of energy. 😴" << CLOSE << std::endl;
		return;
	}
	std::cout << "🗡  ClapTrap " << name << " attacks " << target << \
		", causing " << attack_damage << " points of damage! 🗡" << std::endl;
	energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	unsigned int	real_amount = amount > hit_points ? hit_points : amount;
	
	if (hit_points == 0) {
		std::cout << RED << "[ERROR] ClapTrap " << name << " takes damage, but it is already dead. 💀" << CLOSE << std::endl;
		return;
	}
	std::cout << "😵 ClapTrap " << name << " takes " << real_amount << " damage. 😵" << std::endl;
	hit_points -= real_amount;
	if (hit_points == 0)
		std::cout << "💀 ClapTrap " << name << " dead. 💀" << std::endl;

}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!hit_points || !energy_points) {
		std::cout << RED << "[ERROR] ClapTrap " << name << " trying to repair, but " << CLOSE;
		if (!hit_points)
			std::cout << RED << "ClapTrap " << name << " is already died. 😕" << CLOSE << std::endl; 
		else if (!energy_points)
			std::cout << RED << "ClapTrap " << name << " is out of energy. 😴" << CLOSE << std::endl;
		return;
	}
	std::cout << "🩹 ClapTrap " << name << " repairs itself, it gets " << amount << " hit point back! 🩹" << std::endl;
	hit_points += amount;
	energy_points--;
}