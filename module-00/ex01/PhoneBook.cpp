/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 22:59:14 by hkong             #+#    #+#             */
/*   Updated: 2023/02/21 20:12:17 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::phone_book_index_ = 0;

int	PhoneBook::add(void)
{
	std::string	input_string;

	std::cout << "Enter the information of new contact" << std::endl;
	std::cout << "It's index will be " << phone_book_index_ << std::endl;

	std::cout << "First name: ";
	std::getline(std::cin, input_string);
	if (input_string.empty() || std::cin.eof())
		return (1);
	phone_book_[phone_book_index_]->set_first_name(input_string);
	
	std::cout << "Last name: ";
	std::getline(std::cin, input_string);
	phone_book_[phone_book_index_]->set_last_name(input_string);

	std::cout << "Nickname: ";
	std::getline(std::cin, input_string);
	phone_book_[phone_book_index_]->set_nickname(input_string);

	std::cout << "Phone number: ";
	std::getline(std::cin, input_string);
	phone_book_[phone_book_index_]->set_phone_number(input_string);

	std::cout << "Darkest secret: ";
	std::getline(std::cin, input_string);
	phone_book_[phone_book_index_]->set_darkest_secret(input_string);

	

}