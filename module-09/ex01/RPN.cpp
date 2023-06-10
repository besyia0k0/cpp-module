/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 10:53:08 by hkong             #+#    #+#             */
/*   Updated: 2023/06/10 15:58:06 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void rpn(std::string str) {
	std::stringstream ss(str);
	std::stack<int> stk;
	std::string token;
	int value;

	while (ss >> token) {
		if (token == "+" || token == "-" || token == "/" | token == "*") {
			if (stk.size() < 2)
				throw std::runtime_error("Error: invalid calculate request.");
			
			int b = stk.top();	stk.pop();
			int a = stk.top();	stk.pop();
			switch (token[0]) {
				case '+':
					stk.push(a + b); break;
				case '-':
					stk.push(a - b); break;
				case '/':
					stk.push(a / b); break;
				case '*':
					stk.push(a * b); break;
			}
		}
		else if (token.length() == 1) {
			std::stringstream ssInt(token);

			if (!(ssInt >> value) || ssInt.tellg() != -1)
				throw std::runtime_error("Error: invalid input");
			if (value >= 10 || value < 0)
				throw std::runtime_error("Error: invalid number range");
			stk.push(value);
		}
		else
			throw std::runtime_error("Error: invalid input");
	}
	if (stk.size() != 1)
		throw std::runtime_error("Error: invalid expression");
	std::cout << stk.top() << std::endl;
}