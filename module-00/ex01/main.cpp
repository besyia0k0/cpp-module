/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:44:22 by hkong             #+#    #+#             */
/*   Updated: 2023/02/24 17:03:20 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phone_book;

	std::string	input;

	while (true) {
		phone_book.get_input(input);
		if (input.empty() || std::cin.eof())
		{
			phone_book.error("invalid input");
			continue;
		}
		if (input.compare("ADD") == 0)
			phone_book.add();
		else if (input.compare("SEARCH") == 0)
			phone_book.search();
		else if (input.compare("EXIT") == 0)
			break ;
		else
			phone_book.error("wrong input");
	}
	return (0);
}