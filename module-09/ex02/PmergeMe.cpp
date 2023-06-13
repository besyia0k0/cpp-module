/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:45:27 by hkong             #+#    #+#             */
/*   Updated: 2023/06/13 22:00:00 by hkong            ###   ########.fr       */
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

bool compare(std::pair<int, int> a, std::pair<int, int> b) {
	return a.first < b.first;
}

std::vector<int> vecMainChain(std::vector<int> result, std::vector<std::pair<int, int> > pairs, size_t inputSize, int lastElem) {
	size_t jacobsthal[20] = { 1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 349525};
	size_t pendSize = inputSize / 2 - 1;
	std::vector<int>::iterator resultIt = result.begin();
	std::pair<int, int> target;
	int jacobIdx = 0, lastVisited = 1, idx = 1;

	while (pendSize-- > 0) {
		if (lastVisited == idx) {
			lastVisited = jacobsthal[jacobIdx];
			jacobIdx++;
			idx = jacobsthal[jacobIdx] <= inputSize / 2 ? jacobsthal[jacobIdx] : inputSize / 2;
			target = pairs[idx - 1];
			while (target.first != *resultIt)
				resultIt++;
		} else {
			target = pairs[idx - 1];
			while (target.first != *resultIt)
				resultIt--;
		}
		result.pop_back();
		result.insert(std::lower_bound(result.begin(), resultIt, target.second), target.second);
		resultIt++;
		idx--;
	}
	if (inputSize % 2 == 1){
		result.pop_back();
		result.insert(std::lower_bound(result.begin(), result.end(), lastElem), lastElem);
	}
	return result;
}

std::list<int> listMainChain(std::list<int> result, std::list<std::pair<int, int> > pairs, size_t inputSize, int lastElem) {
	size_t jacobsthal[20] = { 1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 349525};
	size_t pendSize = inputSize / 2 - 1;
	std::list<int>::iterator resultIt = result.begin();
	std::list<std::pair<int, int> >::iterator pairIt = pairs.begin();
	std::pair<int, int> target;
	int jacobIdx = 0, lastVisited = 1, idx = 1;

	while (pendSize-- > 0) {
		if (lastVisited == idx) {
			idx = jacobsthal[jacobIdx + 1] <= inputSize / 2 ? jacobsthal[jacobIdx + 1] : inputSize / 2;
			for (int i = lastVisited; i < idx; i++)
				pairIt++;
			lastVisited = jacobsthal[jacobIdx];
			jacobIdx++;
			target = *pairIt;
			while (target.first != *resultIt)
				resultIt++;
		} else {
			target = *pairIt;
			while (target.first != *resultIt)
				resultIt--;
		}
		result.insert(std::lower_bound(result.begin(), resultIt, target.second), target.second);
		resultIt++;
		pairIt--;
		idx--;
	}
	if (inputSize % 2 == 1)
		result.insert(std::lower_bound(result.begin(), result.end(), lastElem), lastElem);
	return result;
}

std::vector<int> vecFordJohnson(std::vector<int> input) {
	std::vector<std::pair<int, int> > pairs;
	std::vector<int> result;

	if (input.size() == 1)
		return input;
	/* make main array */
	pairs = makePairs<std::vector<std::pair<int, int> > >(input);
	sort(pairs.begin(), pairs.end(), compare);
	result = makeResultBase<std::vector<int>, std::vector<std::pair<int, int> > >(pairs);
	result.resize(input.size());

	/* do main chain */
	return vecMainChain(result, pairs, input.size(), input.back());
}

std::list<int> listFordJohnson(std::vector<int> input) {
	std::list<std::pair<int, int> > pairs;
	std::list<int> result;

	if (input.size() == 1)
		return std::list<int>(1, input[0]);
	/* make main array */
	pairs = makePairs<std::list<std::pair<int, int> > >(input);
	pairs.sort(compare);
	result = makeResultBase<std::list<int>, std::list<std::pair<int, int> > >(pairs);

	/* do main chain */
	return listMainChain(result, pairs, input.size(), input.back());
}
