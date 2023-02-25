/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:43:51 by hkong             #+#    #+#             */
/*   Updated: 2023/02/25 16:38:02 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	int			number = 5;
	Zombie	*zombies = zombieHorde(number, "new_zombie");

	for (int i = 0; i < number ; i++)
		zombies[i].announce();

	delete[] zombies;
	return 0;
}