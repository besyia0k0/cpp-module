/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:05:53 by hkong             #+#    #+#             */
/*   Updated: 2023/03/19 21:24:54 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	std::cout << YELLOW << "----- Required Function Test -----" << CLOSE << std::endl;
	{
		DiamondTrap	robot_a("RobotA");
		DiamondTrap	robot_b("RobotB");
		DiamondTrap robot_c;

		robot_c = robot_b;

		robot_a.attack("RobotB");
		robot_c.takeDamage(20);
		robot_c.beRepaired(10);
		robot_a.whoAmI();
		robot_c.whoAmI();
	}
	std::cout << YELLOW << "---------- Test Finish ----------" << CLOSE << std::endl;
	std::cout << YELLOW << "----- Function Exception Test -----" << CLOSE << std::endl;
	std::cout << YELLOW << "----- attack, beRepaired & energy_points -----" << CLOSE << std::endl;
	{
		DiamondTrap	robot_a("RobotA");

		for (int i = 0; i < 26; i++) {
			robot_a.attack("RobotB");
			robot_a.beRepaired(2);
		}
		robot_a.whoAmI();
	}
	std::cout << YELLOW << "----- takeDamage & hit_points -----" << CLOSE << std::endl;
	{
		DiamondTrap	robot_a("RobotA");

		for (int i = 0; i < 11; i++)
			robot_a.takeDamage(10);
		robot_a.attack("test");
		robot_a.beRepaired(10);
		robot_a.whoAmI();
	}
	std::cout << YELLOW << "---------- Test Finish ----------" << CLOSE << std::endl;
	return 0;
}