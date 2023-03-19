/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:59:27 by hkong             #+#    #+#             */
/*   Updated: 2023/03/19 16:58:52 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

# define CYAN "\x1B[36m"

class DiamondTrap: public FragTrap, public ScavTrap {
	private:
		std::string name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name_);
		DiamondTrap(const DiamondTrap& diamondTrap);
		DiamondTrap& operator=(const DiamondTrap& diamondTrap);
		~DiamondTrap();

		void	attack(const std::string& target);
		void	whoAmI();	
};


#endif