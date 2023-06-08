/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:21:50 by hkong             #+#    #+#             */
/*   Updated: 2023/06/08 16:23:48 by hkong            ###   ########.fr       */
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

std::vector<int>::iterator Span::begin() {
	return this->array.begin();
};

std::vector<int>::iterator Span::end() {
	return this->array.end();
};

void Span::addNumber(int n) {
	if (this->size == this->array.size())
		throw std::out_of_range("[Error] Span is full");
	this->array.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	for (; begin != end ; begin++)
		this->addNumber(*begin);
}

void	Span::printAll() const {
	std::cout << "[ ";
	for (std::vector<int>::const_iterator it = this->array.begin(); it != this->array.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << "]" << std::endl;
}

int	Span::shortestSpan() const {
	if (this->array.size() < 2)
		throw std::out_of_range("[Error] Span size too small");

	std::vector<int> sortedArray(this->array);
	int	result = INT_MAX;

	sort(sortedArray.begin(), sortedArray.end());
	for (size_t i = 0; i < sortedArray.size() - 1; i++) {
		if (sortedArray[i + 1] - sortedArray[i] < result)
			result = sortedArray[i + 1] - sortedArray[i];
	}
	return result;
}

int Span::longestSpan() const {
	if (this->array.size() < 2)
		throw std::out_of_range("[Error] Span size too small");

	std::vector<int> sortedArray(this->array);

	sort(sortedArray.begin(), sortedArray.end());
	return sortedArray.back() - sortedArray.front();
}
