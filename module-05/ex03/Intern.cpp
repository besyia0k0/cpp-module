/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:02:04 by hkong             #+#    #+#             */
/*   Updated: 2023/05/07 16:28:26 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
	std::cout << GREEN << "+ [ Intern ] default constructor called +" << CLOSE << std::endl;
}

Intern::Intern(Intern &intern) {
	std::cout << GREEN << "+ [ Intern ] copy constructor called +" << CLOSE << std::endl;
	(void)intern; /* do nothing */
}

Intern& Intern::operator=(Intern& intern) {
	std::cout << GREEN << "= [ Intern ] copy assignment operator called =" << CLOSE << std::endl;
	(void)intern; /* do nothing */
	return *this;
}

Intern::~Intern() {
	std::cout << GREEN << "- [ Intern ] destructor called -" << CLOSE << std::endl;
}

AForm* Intern::makeForm(std::string formName, std::string formTarget) {
	AForm* form = NULL;
	
	try {
		if (formName == "ShrubberyCreationForm") {
			form = new ShrubberyCreationForm(formTarget);
		} else if (formName == "RobotomyRequestForm") {
			form = new RobotomyRequestForm(formTarget);
		} else if (formName == "PresidentialPardonForm") {
			form = new PresidentialPardonForm(formTarget);
		} else {
			throw FormNotExistException();
		}
		std::cout << "Intern creates " << *form << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return form;
}

const char* Intern::FormNotExistException::what() const throw() {
	return "*** [ Exception ] Intern: Form not exist ***";
}