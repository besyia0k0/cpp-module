/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:43:46 by hkong             #+#    #+#             */
/*   Updated: 2023/02/27 15:37:24 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
	private:
		std::string	name;

	public:
		Zombie();
		Zombie(std::string name_);
		~Zombie();
		void	announce(void);
		void	setName(std::string name_);
};

Zombie*	zombieHorde(int N, std::string name);

# endif