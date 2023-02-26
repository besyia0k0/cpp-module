/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:01:03 by hkong             #+#    #+#             */
/*   Updated: 2023/02/26 15:54:01 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	private:
		Weapon			*weapon_;
		std::string	name_;

	public:
		HumanB(std::string name);
		void				attack(void);
		void				setWeapon(Weapon &weapon);
};

#endif