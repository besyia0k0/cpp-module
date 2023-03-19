/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:59:27 by hkong             #+#    #+#             */
/*   Updated: 2023/03/11 22:19:08 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {
	private:
		std::string name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name_);
		DiamondTrap(const DiamondTrap& diamondTrap);
		DiamondTrap& operator=(const DiamondTrap& diamondTrap);
		~DiamondTrap();

		void	whoAmI();
};


#endif