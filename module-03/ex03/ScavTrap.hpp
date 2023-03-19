/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:19:44 by hkong             #+#    #+#             */
/*   Updated: 2023/03/19 16:17:05 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# define BLUE "\x1B[34m"

class ScavTrap: public virtual ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name_);
		ScavTrap(const ScavTrap& scavTrap);
		ScavTrap& operator=(const ScavTrap& scavtrap);
		~ScavTrap();
		
		void	attack(const std::string& target);
		void	guardGate();
};

#endif