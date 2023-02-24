/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 22:59:14 by hkong             #+#    #+#             */
/*   Updated: 2023/02/24 17:13:30 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::phone_book_index_ = 0;

int	PhoneBook::error(std::string error_msg)
{
	std::cout << std::endl << "------------------ Error ------------------" << std::endl;
	std::cout << error_msg << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	return (1);
}

void	PhoneBook::get_input(std::string &string)
{
	std::cin.clear();
	std::clearerr(stdin);
	std::getline(std::cin, string);
}

int	PhoneBook::get_contact(Contact &contact)
{
	std::string	str;
	
	std::cout << "First name: ";
	get_input(str);
	if (str.empty() || std::cin.eof())
		return (error("Contact can not have empty fields."));
	contact.set_first_name(str);
	
	std::cout << "Last name: ";
	get_input(str);
	if (str.empty() || std::cin.eof())
		return (error("Contact can not have empty fields."));
	contact.set_last_name(str);

	std::cout << "Nickname: ";
	get_input(str);
	if (str.empty() || std::cin.eof())
		return (error("Contact can not have empty fields."));
	contact.set_nickname(str);

	std::cout << "Phone number: ";
	get_input(str);
	if (str.empty() || std::cin.eof())
		return (error("Contact can not have empty fields."));
	contact.set_phone_number(str);

	std::cout << "Darkest secret: ";
	get_input(str);
	if (str.empty() || std::cin.eof())
		return (error("Contact can not have empty fields."));
	contact.set_darkest_secret(str);
	return (0);
}

void	PhoneBook::save(Contact &contact)
{
	phone_book_[phone_book_index_].set_first_name(contact.get_first_name());
	phone_book_[phone_book_index_].set_last_name(contact.get_last_name());
	phone_book_[phone_book_index_].set_nickname(contact.get_nickname());
	phone_book_[phone_book_index_].set_phone_number(contact.get_phone_number());
	phone_book_[phone_book_index_].set_darkest_secret(contact.get_darkest_secret());
	phone_book_index_ = (phone_book_index_ + 1) % 8;
}

int	PhoneBook::add(void)
{
	std::string	input_string;
	Contact			contact;

	std::cout << "Enter the information of new contact" << std::endl;
	std::cout << "It's index will be " << phone_book_index_ << std::endl;
	while (PhoneBook::get_contact(contact))
		std::cout << "Error occured during get_contact; Try Again" << std::endl;
	PhoneBook::save(contact);
	std::cout << "----------------- Add fin -----------------" << std::endl;
	return (0);
}

int	PhoneBook::print_row(int index)
{
	std::string	str;
	
	if (index < 0 || index >= phone_book_index_) {
		error("Invalid index; out of range");
		return (1);
	}
	/* index */
	std::cout << std::right;
	std::cout << std::setw(10) << index << "|";

	/* first name */
	str = phone_book_[index].get_first_name();
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << str << "|";

	/* last name */
	str = phone_book_[index].get_last_name();
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << str << "|";

	/* nick name */
	str = phone_book_[index].get_nickname();
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;

	std::cout << std::endl;
	return (0);
}

int	PhoneBook::print_list(void)
{
	std::cout << "******************* list *******************" << std::endl;
	if (phone_book_index_ == 0)
		std::cout << "            Phone book is empty.            " << std::endl;
	else
	{
		std::cout << "   index  | firstName| lastName | nickname " << std::endl;
		std::cout << "---------- ---------- ---------- ----------" << std::endl;
		for (int i = 0; i < phone_book_index_; i++)
			if (print_row(i))
				return (1);
	}
	std::cout << "*******************************************" << std::endl;
	return (0);
}

int	PhoneBook::search(void)
{
	int	index = 0;
	
	if (print_list()) {
		std::cout << "UNEXPECTED FATAL ERROR occured during print_list" << std::endl;
		exit(1);
	}
	if (phone_book_index_ == 0)
		std::cout << "... back to main ..." << std::endl;
	else
	{
		while (true) {
			std::cin.clear();
			std::clearerr(stdin);
			std::cin >> index;
			std::cin.ignore();
			if (std::cin.eof() || (index < 0 || index >= phone_book_index_))
				error("Invalid index; index should in range 0 ~ " + std::to_string(phone_book_index_ - 1));
			else
				break ;
		}
		std::cout << "You choose index " + std::to_string(index) << std::endl;
		std::cout << "*************** information ***************" << std::endl;
		phone_book_[index].print_information();
		std::cout << "*******************************************" << std::endl;
	}
	std::cout << "---------------Search fin---------------" << std::endl;
	return (0);
}