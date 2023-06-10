/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:45:24 by hkong             #+#    #+#             */
/*   Updated: 2023/06/10 21:21:09 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <vector>
# include <deque>

std::vector<int> checkInput(int argc, char **argv);
void printVector(std::vector<int> vec);

template <typename T>
T fordJohnson(std::vector<int> input) {
	T small, large;

	for (size_t i = 0; i < input.size() - 1; i += 2) {
		if (input[i] > input[i + 1]) {
			large.push_back(input[i]);
			small.push_back(input[i + 1]);
		} else {
			large.push_back(input[i + 1]);
			small.push_back(input[i]);
		}
	}
	if (input.size() % 2 != 0)
		large.push_back(input.back());
	
	while (large.size()) {
		int target = large.top();
		large.pop();

		for (typename T::iterator it = small.begin(); it != small.end(); it++) {
			if ()
		}		
	}
}

#endif