/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 09:40:50 by hkong             #+#    #+#             */
/*   Updated: 2023/05/06 12:14:11 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("default", 72, 45) {
	std::cout << GREEN << "+ [ RobotomyRequestForm ] default constructor called +" << CLOSE << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name_): AForm(name_, 72, 45) {
	std::cout << GREEN << "+ [ RobotomyRequestForm ] " << getName() << " constructor called +" << CLOSE << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& robotomyRequestForm): AForm(robotomyRequestForm.getName(), robotomyRequestForm.getSignGrade(), robotomyRequestForm.getExecuteGrade()) {
	std::cout << GREEN << "+ [ RobotomyRequestForm ] " << getName() << " copy constructor called +" << CLOSE << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& robotomyRequestForm) {
	std::cout << GREEN << "= [ RobotomyRequestForm ] " << getName() << " copy assignment operator called (*do nothing*) =" << CLOSE << std::endl;
	// name, signGrade, executeGrade is constant variable, so it cannot changed.
	// also sign is done by special case, so it makes no sense.
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << GREEN << "- [ RobotomyRequestForm ] " << getName() << " destructor called -" << CLOSE << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const {
	canExecute(executor);
	std::cout << "Zzzzz... ** some drilling noises **" << std::endl;
	std::srand(std::time(nullptr)); // use current time as seed for random generator
  if (std::rand() % 2 == 0)
		std::cout << executor.getName() << " has been robotomized!!" << std::endl;
	else
		std::cout << "Robotomy failed..." << std::endl;
}