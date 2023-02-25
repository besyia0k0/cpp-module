/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:43:46 by hkong             #+#    #+#             */
/*   Updated: 2023/02/25 16:33:01 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
	private:
		std::string	name_;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
		void	set_name(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

# endif