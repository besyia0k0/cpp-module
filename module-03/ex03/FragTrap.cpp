/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:14:07 by hkong             #+#    #+#             */
/*   Updated: 2023/03/19 17:01:05 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	std::cout << GREEN << "+ " << MAGENTA << "FragTrap " << GREEN << "Default constructor called +" << CLOSE << std::endl;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(std::string name_): ClapTrap(name_) {
	std::cout << GREEN << "+ " << MAGENTA << "FragTrap " << GREEN << name << " constructor called +" << CLOSE << std::endl;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& fragTrap) {
	std::cout << GREEN << "+ " << MAGENTA << "FragTrap " << GREEN << "Copy constructor called +" << CLOSE << std::endl;
	*this = fragTrap;
}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap) {
	std::cout << YELLOW << "= " << MAGENTA << "FragTrap " << YELLOW << "Copy assignment operator called =" << CLOSE << std::endl;
	name = fragTrap.name;
	hit_points = fragTrap.hit_points;
	energy_points = fragTrap.energy_points;
	attack_damage = fragTrap.attack_damage;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << GREEN << "- " << MAGENTA << "FragTrap " << GREEN << name << " destructor called -" << CLOSE << std::endl;
}

void	FragTrap::attack(const std::string& target) {
	if (!hit_points || !energy_points) {
		std::cout << RED << "[ERROR] " << MAGENTA << "FragTrap " << RED << name << " tried to attack, but " << CLOSE;
		if (!hit_points)
			std::cout << MAGENTA << "FragTrap " << RED << name << " is already died. 😕" << CLOSE << std::endl; 
		else if (!energy_points)
			std::cout << MAGENTA << "FragTrap " << RED << name << " is out of energy. 😴" << CLOSE << std::endl;
		return;
	}
	std::cout << "🗡  " << MAGENTA << "FragTrap " << CLOSE << name << " attacks " << target << \
		", causing " << attack_damage << " points of damage! 🗡" << std::endl;
	energy_points--;
}

void	FragTrap::highFivesGuys(void) {
	if (!hit_points || !energy_points) {
		std::cout << RED << "[ERROR] " << MAGENTA << "FragTrap " << RED << name << " tried high-five, but " << CLOSE;
		if (!hit_points)
			std::cout << MAGENTA << "FragTrap " << RED << name << " is already died. 😕" << CLOSE << std::endl; 
		else if (!energy_points)
			std::cout << MAGENTA << "FragTrap " << RED << name << " is out of energy. 😴" << CLOSE << std::endl;
		return;
	}
	std::cout << "🙌 " << MAGENTA << "FragTrap " << CLOSE << name << " is doing high-five! 🙌" << std::endl;
}