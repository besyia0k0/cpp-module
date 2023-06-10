/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:47:03 by hkong             #+#    #+#             */
/*   Updated: 2023/06/10 21:17:07 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
	std::vector<int> input;
	try {
		input = checkInput(argc, argv);
		printVector(input);
		printVector(fordJohnson<std::vector<int> >(input));
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}