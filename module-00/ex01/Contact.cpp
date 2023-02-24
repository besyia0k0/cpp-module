/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 21:20:42 by hkong             #+#    #+#             */
/*   Updated: 2023/02/24 20:58:17 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_first_name(std::string first_name) {
	first_name_ = first_name;
}

void	Contact::set_last_name(std::string last_name) {
	last_name_ = last_name;
}

void	Contact::set_nickname(std::string nickname) {
	nickname_ = nickname;
}

void	Contact::set_phone_number(std::string phone_number) {
	phone_number_ = phone_number;
}

void	Contact::set_darkest_secret(std::string darkest_secret) {
	darkest_secret_ = darkest_secret;
}

std::string	Contact::get_first_name(void) const {
	return first_name_;
}

std::string	Contact::get_last_name(void) const {
	return last_name_;
}

std::string	Contact::get_nickname(void) const {
	return nickname_;
}

std::string	Contact::get_phone_number(void) const {
	return phone_number_;
}

std::string	Contact::get_darkest_secret(void) const {
	return darkest_secret_;
}

void	Contact::print_information(void) const {
	std::cout << "First name: " << first_name_ << std::endl;
	std::cout << "Last name: " << last_name_ << std::endl;
	std::cout << "Nickname: " << nickname_ << std::endl;
	std::cout << "Phone number: " << phone_number_ << std::endl;
	std::cout << "Darkest secret: " << darkest_secret_ << std::endl;
}