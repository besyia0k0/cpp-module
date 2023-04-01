/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:11:22 by hkong             #+#    #+#             */
/*   Updated: 2023/03/23 18:06:38 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << GREEN << "+ [ Brain ] Default Constructor called +" << CLOSE << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "";
}

Brain::Brain(const Brain& brain) {
	std::cout << GREEN << "+ [ Brain ] Copy Constructor called +" << CLOSE << std::endl;
	*this = brain;
}

Brain& Brain::operator=(const Brain& brain) {
	std::cout << GREEN << "= [ Brain ] Copy Assignment Operator called =" << CLOSE << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = brain.ideas[i];
	return *this;
}

Brain::~Brain() {
	std::cout << GREEN << "- [ Brain ] Destructor called -" << CLOSE << std::endl;
}

void	Brain::showIdeas(void) const {
	std::cout << "[";
	for (int i = 0; i < 100; i++) {
		std::cout << ideas[i];
		if (i != 99)
			std::cout << ",";
	}
	std::cout << "]" << std::endl;
}

void	Brain::insertIdea(int index, std::string idea) {
	if (index < 0 || index >= 100) {
		std::cout << RED << "[ERROR] invalid index" << CLOSE << std::endl;
		return ;
	}
	ideas[index] = idea;
}