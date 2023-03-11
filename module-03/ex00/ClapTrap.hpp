/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:05:51 by hkong             #+#    #+#             */
/*   Updated: 2023/03/10 00:55:28 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
	private:
		std::string name;
		int					hit_points;
		int					energy_points;
		int					attack_damage;

	public:
		ClapTrap(std::string name_);
		ClapTrap(const ClapTrap& clapTrap);
		ClapTrap& operator=(const ClapTrap &clapTrap);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};


#endif