/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:44:54 by hkong             #+#    #+#             */
/*   Updated: 2023/02/25 18:00:08 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
	std::string	str("HI THIS IS BRAIN");
	std::string *stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "----------Print memory address----------" << std::endl;
	std::cout << "string address: " << &str << std::endl;
	std::cout << "stringPTR address: " << stringPTR << std::endl;
	std::cout << "stringREF address: " << &stringREF << std::endl;

	std::cout << "--------------Print value---------------" << std::endl;
	std::cout << "string value: " << str << std::endl;
	std::cout << "stringPTR value: " << *stringPTR << std::endl;
	std::cout << "stringREF value: " << stringREF << std::endl;

	return (0);
}