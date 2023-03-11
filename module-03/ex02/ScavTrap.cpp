/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:19:41 by hkong             #+#    #+#             */
/*   Updated: 2023/03/11 21:06:20 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << GREEN << "+ " << BLUE << "ScavTrap " << GREEN << "Default constructor called +" << CLOSE << std::endl;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name_): ClapTrap(name_) {
	std::cout << GREEN << "+ " << BLUE << "ScavTrap " << GREEN << name << " constructor called +" << CLOSE << std::endl;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap) {
	std::cout << GREEN << "+ " << BLUE << "ScavTrap " << GREEN << "Copy constructor called +" << CLOSE << std::endl;
	*this = scavTrap;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap) {
	std::cout << YELLOW << "= " << BLUE << "ScavTrap " << YELLOW << "Copy assignment operator called =" << CLOSE << std::endl;
	name = scavTrap.name;
	hit_points = scavTrap.hit_points;
	energy_points = scavTrap.energy_points;
	attack_damage = scavTrap.attack_damage;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << GREEN << "- " << BLUE << "ScavTrap " << GREEN << name << " destructor called -" << CLOSE << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (!hit_points || !energy_points) {
		std::cout << RED << "[ERROR] " << BLUE << "ScavTrap " << RED << name << " tried to attack, but " << CLOSE;
		if (!hit_points)
			std::cout << BLUE << "ScavTrap " << RED << name << " is already died. 😕" << CLOSE << std::endl; 
		else if (!energy_points)
			std::cout << BLUE << "ScavTrap " << RED << name << " is out of energy. 😴" << CLOSE << std::endl;
		return;
	}
	std::cout << "🗡  " << BLUE << "ScavTrap " << CLOSE << name << " attacks " << target << \
		", causing " << attack_damage << " points of damage! 🗡" << std::endl;
	energy_points--;
}

void	ScavTrap::guardGate() {
	if (!hit_points || !energy_points) {
		std::cout << RED << "[ERROR] " << BLUE << "ScavTrap " << RED << name << " tried gate keeper mode, but " << CLOSE;
		if (!hit_points)
			std::cout << BLUE << "ScavTrap " << RED << name << " is already died. 😕" << CLOSE << std::endl; 
		else if (!energy_points)
			std::cout << BLUE << "ScavTrap " << RED << name << " is out of energy. 😴" << CLOSE << std::endl;
		return;
	}
	std::cout << "🛡  " << BLUE << "ScavTrap " << CLOSE << name << " is now in gate keeper mode! 🛡" << std::endl;
}
