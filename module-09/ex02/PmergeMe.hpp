/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:45:24 by hkong             #+#    #+#             */
/*   Updated: 2023/06/13 21:59:52 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <algorithm>
# include <vector>
# include <list>
# include <ctime>

std::vector<int> vecFordJohnson(std::vector<int> input);
std::list<int> listFordJohnson(std::vector<int> input);
std::vector<int> checkInput(int argc, char **argv);
bool compare(std::pair<int, int> a, std::pair<int, int> b);

template <typename PC>
PC makePairs(std::vector<int> input) {
	PC pairs;

	for (size_t i = 0; i < input.size() - 1; i += 2) {
		if (input[i] > input[i + 1])
			pairs.push_back(std::make_pair(input[i], input[i + 1]));
		else 
			pairs.push_back(std::make_pair(input[i + 1], input[i]));
	}
	return pairs;
}

template <typename C, typename PC>
C makeResultBase(PC pairInput) {
	typename PC::iterator pairIt;
	C result;

	for (pairIt = pairInput.begin(); pairIt != pairInput.end(); pairIt++) {
		result.push_back((*pairIt).first);
	}
	result.insert(result.begin(), pairInput.front().second);
	return result;
}

template <typename T>
void printContainer(T c) {
	typename T::iterator it = c.begin();
	for (; it != c.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

#endif