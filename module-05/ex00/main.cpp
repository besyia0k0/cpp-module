/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:33:36 by hkong             #+#    #+#             */
/*   Updated: 2023/05/04 21:51:11 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	std::cout << "-------- Basic Function Test --------" << std::endl;
	{
		Bureaucrat first("first", 30);
		Bureaucrat second(first);

		std::cout << first << std::endl;
		std::cout << second << std::endl;
		first.incrementGrade();
		second.decrementGrade();
		std::cout << first << std::endl;
		std::cout << second << std::endl;
	}
	return 0;
}