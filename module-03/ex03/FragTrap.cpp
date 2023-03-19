/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:14:07 by hkong             #+#    #+#             */
/*   Updated: 2023/03/11 21:52:27 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	std::cout << GREEN << "+ " << CYAN << "FragTrap " << GREEN << "Default constructor called +" << CLOSE << std::endl;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(std::string name_): ClapTrap(name_) {
	std::cout << GREEN << "+ " << CYAN << "FragTrap " << GREEN << name << " constructor called +" << CLOSE << std::endl;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& fragTrap) {
	std::cout << GREEN << "+ " << CYAN << "FragTrap " << GREEN << "Copy constructor called +" << CLOSE << std::endl;
	*this = fragTrap;
}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap) {
	std::cout << YELLOW << "= " << CYAN << "FragTrap " << YELLOW << "Copy assignment operator called =" << CLOSE << std::endl;
	name = fragTrap.name;
	hit_points = fragTrap.hit_points;
	energy_points = fragTrap.energy_points;
	attack_damage = fragTrap.attack_damage;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << GREEN << "- " << CYAN << "FragTrap " << GREEN << name << " destructor called -" << CLOSE << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	if (!hit_points || !energy_points) {
		std::cout << RED << "[ERROR] " << CYAN << "FragTrap " << RED << name << " tried high-five, but " << CLOSE;
		if (!hit_points)
			std::cout << CYAN << "FragTrap " << RED << name << " is already died. 😕" << CLOSE << std::endl; 
		else if (!energy_points)
			std::cout << CYAN << "FragTrap " << RED << name << " is out of energy. 😴" << CLOSE << std::endl;
		return;
	}
	std::cout << "🙌 " << CYAN << "FragTrap " << CLOSE << name << " is doing high-five! 🙌" << std::endl;
}