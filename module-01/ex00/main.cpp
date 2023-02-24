/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:02:05 by hkong             #+#    #+#             */
/*   Updated: 2023/02/24 22:19:25 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie	*stackZombie = newZombie("stack");

	stackZombie->announce();
	randomChump("heap");
	delete stackZombie;
	return (0);
}