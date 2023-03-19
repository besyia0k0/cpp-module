/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:14:09 by hkong             #+#    #+#             */
/*   Updated: 2023/03/19 16:57:01 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# define MAGENTA "\x1B[35m"

class FragTrap: public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name_);
		FragTrap(const FragTrap& fragTrap);
		FragTrap& operator=(const FragTrap& fragTrap);
		~FragTrap();

		void	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif