/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:30:37 by hkong             #+#    #+#             */
/*   Updated: 2023/02/26 21:43:12 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
	Harl	harl;

	std::cout << "----- Harl DEBUG -----" << std::endl;
	harl.complain("DEBUG");

	std::cout << "----- Harl INFO -----" << std::endl;
	harl.complain("INFO");

	std::cout << "----- Harl WARNING -----" << std::endl;
	harl.complain("WARNING");

	std::cout << "----- Harl ERROR -----" << std::endl;
	harl.complain("ERROR");
	return (0);
}