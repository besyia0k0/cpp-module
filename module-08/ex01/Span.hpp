/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:21:50 by hkong             #+#    #+#             */
/*   Updated: 2023/05/27 22:05:17 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>

# define YELLOW "\x1B[33m"
# define GREEN "\x1B[32m"
# define RED "\x1B[31m"
# define CLOSE "\x1B[0m"

class Span {
	private:
		std::vector<int> array;
		unsigned int	size;
		Span();

	public:
		Span(unsigned int _size);
		Span(const Span& span);
		Span& operator=(const Span& span);
		~Span();

		void addNumber(int n);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		
		int shortestSpan() const;
		int longestSpan() const;
		void printAll() const;

		std::vector<int>::iterator begin();
		std::vector<int>::iterator end();
};

#endif