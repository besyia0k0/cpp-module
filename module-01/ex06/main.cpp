/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:30:37 by hkong             #+#    #+#             */
/*   Updated: 2023/02/26 22:06:17 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {
	Harl harl;
	
	if (argc != 2)
		std::cout << "Error: input should be one arguments" << std::endl;
	else
		harl.complain(argv[1]);
	return (0);
}