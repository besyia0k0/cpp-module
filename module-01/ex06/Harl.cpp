/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:30:34 by hkong             #+#    #+#             */
/*   Updated: 2023/02/26 22:11:04 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. " << \
		"You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. " << \
		"I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Harl::levelSwitch(int num) {
	enum				Levels { DEBUG = 0, INFO, WARNING, ERROR	};

	switch (num) {
		case DEBUG:
			Harl::debug();

		case INFO:
			Harl::info();

		case WARNING:
			Harl::warning();

		case ERROR:
			Harl::error();
			break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::complain(std::string level) {
	std::string	levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };		
	int					num = -1;

	for (int i = 0; i < 4; i++) {
		if (levels[i].compare(level) == 0) {
			num = i;
			break;
		}
	}
	Harl::levelSwitch(num);
}