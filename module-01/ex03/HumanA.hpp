/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:00:59 by hkong             #+#    #+#             */
/*   Updated: 2023/02/26 15:33:30 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	private:
		Weapon			&weapon_;
		std::string	name_;

	public:
		HumanA(std::string name, Weapon	&weapon);
		void				attack(void);
};

#endif