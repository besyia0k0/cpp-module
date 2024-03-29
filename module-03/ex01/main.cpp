/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:05:53 by hkong             #+#    #+#             */
/*   Updated: 2023/03/11 21:56:43 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	std::cout << YELLOW << "----- Required Function Test -----" << CLOSE << std::endl;
	{
		ScavTrap	robot_a("RobotA");
		ScavTrap	robot_b("RobotB");

		robot_a.attack("RobotB");
		robot_b.takeDamage(20);
		robot_b.beRepaired(10);
		robot_a.guardGate();
		robot_b.guardGate();
	}
	std::cout << YELLOW << "---------- Test Finish ----------" << CLOSE << std::endl;
	std::cout << YELLOW << "----- Function Exception Test -----" << CLOSE << std::endl;
	std::cout << YELLOW << "----- attack, beRepaired & energy_points -----" << CLOSE << std::endl;
	{
		ScavTrap	robot_a("RobotA");

		for (int i = 0; i < 26; i++) {
			robot_a.attack("RobotB");
			robot_a.beRepaired(2);
		}
		robot_a.guardGate();
	}
	std::cout << YELLOW << "----- takeDamage & hit_points -----" << CLOSE << std::endl;
	{
		ScavTrap	robot_a("RobotA");

		for (int i = 0; i < 11; i++)
			robot_a.takeDamage(10);
		robot_a.attack("test");
		robot_a.beRepaired(10);
		robot_a.guardGate();
	}
	std::cout << YELLOW << "---------- Test Finish ----------" << CLOSE << std::endl;
	return 0;
}