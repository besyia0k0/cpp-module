/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:05:53 by hkong             #+#    #+#             */
/*   Updated: 2023/03/11 18:04:05 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int	main(void) {
	std::cout << YELLOW << "----- Required Function Test -----" << CLOSE << std::endl;
	{
		ClapTrap	robot_a("RobotA");
		ClapTrap	robot_b("RobotB");

		robot_a.attack("RobotB");
		robot_b.takeDamage(0);
		robot_b.beRepaired(5);
	}
	std::cout << YELLOW << "---------- Test Finish ----------" << CLOSE << std::endl;
	std::cout << YELLOW << "----- Function Exception Test -----" << CLOSE << std::endl;
	std::cout << YELLOW << "----- attack & energy_points -----" << CLOSE << std::endl;
	{
		ClapTrap	robot_a("RobotA");

		for (int i = 0; i < 15; i++)
			robot_a.attack("RobotB");
	}
	std::cout << YELLOW << "----- takeDamage & hit_points -----" << CLOSE << std::endl;
	{
		ClapTrap	robot_a("RobotA");

		for (int i = 0; i < 7; i++)
			robot_a.takeDamage(2);
		robot_a.attack("test");
		robot_a.beRepaired(10);
	}
	std::cout << YELLOW << "----- beRepaired - energy_points -----" << CLOSE << std::endl;
	{
		ClapTrap	robot_a("RobotA");

		for (int i = 0; i < 12; i++)
			robot_a.beRepaired(1);
	}
	std::cout << YELLOW << "---------- Test Finish ----------" << CLOSE << std::endl;
	return 0;
}