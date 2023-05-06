/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 09:40:55 by hkong             #+#    #+#             */
/*   Updated: 2023/05/06 16:52:37 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("default", 25, 5) {
	std::cout << GREEN << "+ [ PresidentialPardonForm ] default constructor called +" << CLOSE << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name_): AForm(name_, 25, 5) {
	std::cout << GREEN << "+ [ PresidentialPardonForm ] " << getName() << " constructor called +" << CLOSE << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& presidentialPardonForm): AForm(presidentialPardonForm.getName(), presidentialPardonForm.getSignGrade(), presidentialPardonForm.getExecuteGrade()) {
	std::cout << GREEN << "+ [ PresidentialPardonForm ] " << getName() << " copy constructor called +" << CLOSE << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& presidentialPardonForm) {
	std::cout << GREEN << "= [ PresidentialPardonForm ] " << getName() << " copy assignment operator called (*do nothing*) =" << CLOSE << std::endl;
	// name, signGrade, executeGrade is constant variable, so it cannot changed.
	// also sign is done by special case, so it makes no sense.
	presidentialPardonForm.getName();
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << GREEN << "- [ PresidentialPardonForm ] " << getName() << " destructor called -" << CLOSE << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	canExecute(executor);
	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}