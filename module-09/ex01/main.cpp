/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 10:53:01 by hkong             #+#    #+#             */
/*   Updated: 2023/06/10 15:54:50 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Error: invalid arguments" << std::endl;
		return 0;
	}
	
	try {
		rpn(argv[1]);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}