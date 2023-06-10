/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:16:53 by hkong             #+#    #+#             */
/*   Updated: 2023/06/10 09:24:17 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	(void)argc;
	try {
		exchangeBitcoin(argc > 1 ? argv[1]: "");
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}