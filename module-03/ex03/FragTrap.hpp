/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:14:09 by hkong             #+#    #+#             */
/*   Updated: 2023/03/11 21:49:47 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# define CYAN "\x1B[36m"

class FragTrap: public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name_);
		FragTrap(const FragTrap& fragTrap);
		FragTrap& operator=(const FragTrap& fragTrap);
		~FragTrap();

		void	highFivesGuys(void);
};

#endif