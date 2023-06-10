/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:45:27 by hkong             #+#    #+#             */
/*   Updated: 2023/06/10 21:17:43 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<int> checkInput(int argc, char **argv) {
	std::vector<int> input;
	std::string sNum;
	int num;

	for (int i = 1; i < argc; i++) {
		sNum = argv[i];
		std::stringstream ss(sNum);

		if (!(ss >> num) || ss.tellg() != -1)
			throw std::runtime_error("Error: invalid number");
		if (num <= 0)
			throw std::runtime_error("Error: input should be positive integer");
		input.push_back(num);
	}
	return input;
}

void printVector(std::vector<int> vec) {
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
}
