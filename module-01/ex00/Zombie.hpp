/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:12:08 by hkong             #+#    #+#             */
/*   Updated: 2023/02/24 22:06:50 by hkong            ###   ########.fr       */
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
};

Zombie*	newZombie(std::string name);
void		randomChump(std::string name);


#endif