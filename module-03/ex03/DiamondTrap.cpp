/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:59:25 by hkong             #+#    #+#             */
/*   Updated: 2023/03/19 16:59:35 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("default_clap_name"), FragTrap(), ScavTrap(), name("default") {
	std::cout << GREEN << "+ " << CYAN << "DiamondTrap " << GREEN << "Default constructor called +" << CLOSE << std::endl;
	hit_points = 100; // from FragTrap
	energy_points = 50; // from ScavTrap
	attack_damage = 30; // from FragTrap
}

DiamondTrap::DiamondTrap(std::string name_): ClapTrap(name_ + "_clap_name"), FragTrap(), ScavTrap(), name(name_) {
	std::cout << GREEN << "+ " << CYAN << "DiamondTrap " << GREEN << name << " constructor called +" << CLOSE << std::endl;
	hit_points = 100; // from FragTrap
	energy_points = 50; // from ScavTrap
	attack_damage = 30; // from FragTrap
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondTrap) {
	std::cout << GREEN << "+ " << CYAN << "DiamondTrap " << GREEN << "Copy constructor called +" << CLOSE << std::endl;
	*this = diamondTrap;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondTrap) {
	std::cout << YELLOW << "= " << CYAN << "DiamondTrap " << YELLOW << "Copy assignment operator called =" << CLOSE << std::endl;
	name = diamondTrap.DiamondTrap::name;
	ClapTrap::name = diamondTrap.ClapTrap::name;
	hit_points = diamondTrap.hit_points;
	energy_points = diamondTrap.energy_points;
	attack_damage = diamondTrap.attack_damage;
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << GREEN << "- " << CYAN << "DiamondTrap " << GREEN << name << " destructor called -" << CLOSE << std::endl;
	
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "My " << CYAN << "DiamondTrap " << CLOSE << "name is " + name + " and my ClapTrap name is " + ClapTrap::name << std::endl;
}
