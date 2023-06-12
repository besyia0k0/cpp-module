/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:45:27 by hkong             #+#    #+#             */
/*   Updated: 2023/06/12 22:31:45 by hkong            ###   ########.fr       */
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

bool compare(std::pair<int, int> a, std::pair<int, int> b) {
	return a.first < b.first;
}

std::vector<int> fordJohnson(std::vector<int> input) {
	int jacobsthal[] = { 1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 349525};
	std::vector<std::pair<int, int> > pairs;
	std::vector<std::pair<int, int> >::iterator pairIt;
	std::vector<int>::iterator resultIt, inputIt;
	std::vector<int> result;
	int jacobIdx = 0;
	bool isOdd = input.size() % 2 != 0;

	for (size_t i = 0; i < input.size() - 1; i += 2) {
		if (input[i] > input[i + 1])
			pairs.push_back(std::make_pair(input[i], input[i + 1]));
		else 
			pairs.push_back(std::make_pair(input[i + 1], input[i]));
	}

	sort(pairs.begin(), pairs.end(), compare);
	for (pairIt = pairs.begin(); pairIt != pairs.end(); pairIt++) {
		result.push_back((*pairIt).first);
	}


	std::pair<int, int> singlePair;
	int lastVisited = 1, idx = 1;
	resultIt = result.begin();

	//기존 jcobit값 lastvisited로 갱신, jcobit++, jcobit값 idx로 갱신 -> 그 차이만큼 이터레이터 옮겨야 함

	result.insert(result.begin(), pairs.front().second);
	while ((isOdd ? input.size() - 1 : input.size()) > result.size()) {
		if (lastVisited == idx) {
			lastVisited = jacobsthal[jacobIdx];
			jacobIdx++;
			idx = (unsigned long)jacobsthal[jacobIdx] <= input.size() / 2 ? jacobsthal[jacobIdx]: input.size()/2 ;
			singlePair = pairs[idx - 1];
			while (singlePair.first != *resultIt)
				resultIt++;
		} else {
			singlePair = pairs[idx - 1];
			while (singlePair.first != *resultIt)
				resultIt--;
		}
		inputIt = std::lower_bound(result.begin(), resultIt, singlePair.second);
		result.insert(--inputIt, singlePair.second);
	}
	if (isOdd){
		inputIt = std::lower_bound(result.begin(), resultIt, input.back());
		result.insert(--inputIt, input.back());
	}
	return result;


	// while (large.size()) {
	// 	int target = large.top();
	// 	large.pop();

	// 	for (typename T::iterator it = small.begin(); it != small.end(); it++) {
	// 		if ()
	// 	}		
	// }
}
