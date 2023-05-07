/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:02:04 by hkong             #+#    #+#             */
/*   Updated: 2023/05/07 21:46:14 by hkong            ###   ########.fr       */
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
	std::string options[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	enum	eOptionNum { SHRUBBERY = 0, ROBOTOMY, PRESIDENTIAL};
	int	option = -1;
	AForm* form = NULL;
	
	for (int i = 0; i < 3; i++) {
		if (options[i].compare(formName) == 0)
			option = i;
	}

	try {
		switch (option) {
			case SHRUBBERY:
				form = new ShrubberyCreationForm(formTarget);
				break;
			case ROBOTOMY:
				form = new RobotomyRequestForm(formTarget);
				break;
			case PRESIDENTIAL:
				form = new PresidentialPardonForm(formTarget);
				break;
			default:
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