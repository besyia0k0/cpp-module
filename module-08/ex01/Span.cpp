/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:21:50 by hkong             #+#    #+#             */
/*   Updated: 2023/05/27 21:02:20 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): size(0) {
	std::cout << GREEN << "+ [ Span ] default constructor called +" << CLOSE << std::endl;
}

Span::Span(unsigned int _size): size(_size) {
	std::cout << GREEN << "+ [ Span ] size constructor called +" << CLOSE << std::endl;
}

Span::Span(const Span& span): size(span.size) {
	std::cout << GREEN << "+ [ Span ] copy constructor called +" << CLOSE << std::endl;
	for (std::vector<int>::const_iterator it = span.array.begin(); it != span.array.end(); it++) {
		this->array.push_back(*it);
	}
}

Span& Span::operator=(const Span& span) {
	std::cout << GREEN << "= [ Span ] copy assignment operator called =" << CLOSE << std::endl;
	this->size = span.size;
	this->array.clear();
	for (std::vector<int>::const_iterator it = span.array.begin(); it != span.array.end(); it++) {
		this->array.push_back(*it);
	}
	return *this;
}

Span::~Span() {
	std::cout << GREEN << "- [ Span ] destructor called -" << CLOSE << std::endl;
}

void Span::addNumber(int n) {
	if (this->size == this->array.size())
		throw std::out_of_range("[Error] Span is full");
	this->array.push_back(n);
}

int	Span::shortestSpan() {
	if (this->array.size() == 0)
		throw std::bad_function_call();

	std::vector<int> sortedArray(this->array);
	int	result = INT_MAX;

	sort(sortedArray.begin(), sortedArray.end());
	for (size_t i = 0; i < sortedArray.size() - 1; i++) {
		if (sortedArray[i + 1] - sortedArray[i] < result)
			result = sortedArray[i + 1] - sortedArray[i];
	}
	return result;
}

int Span::longestSpan() {
	std::vector<int> sortedArray(this->array);

	sort(sortedArray.begin(), sortedArray.end());
	return sortedArray.back() - sortedArray.front();
}
