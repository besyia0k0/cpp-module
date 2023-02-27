/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:01:03 by hkong             #+#    #+#             */
/*   Updated: 2023/02/27 15:42:14 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	private:
		Weapon			*weapon;
		std::string	name;

	public:
		HumanB(std::string name_);
		void	attack(void);
		void	setWeapon(Weapon &weapon_);
};

#endif