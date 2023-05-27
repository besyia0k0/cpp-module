/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 01:43:13 by hkong             #+#    #+#             */
/*   Updated: 2023/05/27 21:04:55 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
	std::cout << GREEN << "+ [ Serializer ] default constructor called +" << CLOSE << std::endl;
}

Serializer::Serializer(const Serializer& serializer) {
	std::cout << GREEN << "+ [ Serializer ] copy constructor called +" << CLOSE << std::endl;
	(void)serializer; /* do nothing */
}

Serializer& Serializer::operator=(const Serializer& serializer) {
	std::cout << GREEN << "= [ Serializer ] copy assignment operator called =" << CLOSE << std::endl;
	(void)serializer; /* do nothing */
	return *this;
}

Serializer::~Serializer() {
	std::cout << GREEN << "- [ Serializer ] destructor called -" << CLOSE << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr) {
	std::cout << "** serialize **" << std::endl;
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	std::cout << "** deserialize **" << std::endl;
	return reinterpret_cast<Data*>(raw);
}
