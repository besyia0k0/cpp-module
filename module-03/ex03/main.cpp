/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:05:53 by hkong             #+#    #+#             */
/*   Updated: 2023/03/19 16:41:44 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	std::cout << YELLOW << "----- Required Function Test -----" << CLOSE << std::endl;
	{
		DiamondTrap	robot_a("RobotA");
		DiamondTrap	robot_b("RobotB");

		robot_a.attack("RobotB");
		robot_b.takeDamage(20);
		robot_b.beRepaired(10);
		robot_a.whoAmI();
		robot_b.whoAmI();
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