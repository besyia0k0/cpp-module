/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:02:05 by hkong             #+#    #+#             */
/*   Updated: 2023/02/27 15:36:30 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	/* default stack zombie created */
	Zombie	defaultStackZombie;

	defaultStackZombie.announce();
	std::cout << std::endl;

	/* named stack zombie created */
	Zombie	namedStackZombie("named_stack");

	namedStackZombie.announce();
	std::cout << std::endl;

	/* stack zombie created & deleted in function*/
	randomChump("stack");
	std::cout << std::endl;

	/* heap zombie created */
	Zombie	*heapZombie = newZombie("heap");
	
	if (heapZombie == nullptr)
		std::cout << "MEMORY ALLOCATION ERROR" << std::endl;
	else {
		heapZombie->announce();
		std::cout << std::endl;
	}
	delete heapZombie;
	return (0);
}