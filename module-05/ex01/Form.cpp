/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 00:45:11 by hkong             #+#    #+#             */
/*   Updated: 2023/05/06 17:51:06 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(): name("default"), sign(false), signGrade(150), executeGrade(150) {
	std::cout << GREEN << "+ [ Form ] default constructor called +" << CLOSE << std::endl;
}

Form::Form(const std::string name_, const int signGrade_, const int executeGrade_): name(name_), sign(false), signGrade(checkGrade(signGrade_)), executeGrade(checkGrade(executeGrade_)) {
	std::cout << GREEN << "+ [ Form ] " << name << " constructor called +" << CLOSE << std::endl;
}

Form::Form(const Form& form): name(form.getName()), sign(false), signGrade(checkGrade(form.getSignGrade())), executeGrade(checkGrade(form.getExecuteGrade())) {
	std::cout << GREEN << "+ [ Form ] " << name << " copy constructor called +" << CLOSE << std::endl;
}

Form& Form::operator=(const Form& form) {
	std::cout << GREEN << "= [ Form ] " << name << " copy assignment operator called (*do nothing*) =" << CLOSE << std::endl;
	// name, signGrade, executeGrade is constant variable, so it cannot changed.
	// also sign is done by special case, so it makes no sense.
	return *this;
}

Form::~Form() {
	std::cout << GREEN << "- [ Form ] " << name << " destructor called -" << CLOSE << std::endl;
}

std::string Form::getName() const {
	return name;
}

bool	Form::getSigned() const {
	return sign;
}

int	Form::getSignGrade() const {
	return signGrade;
}

int Form::getExecuteGrade() const {
	return executeGrade;
}

void	Form::beSigned(Bureaucrat const& bureaucrat) {
	if (bureaucrat.getGrade() <= signGrade)
		sign = true;
	else
		throw GradeTooLowException();
}

int Form::checkGrade(int grade) const {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	return grade;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "*** [ Exception ] Form: Grade Too High ***";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "*** [ Exception ] Form: Grade Too Low ***";
}

std::ostream& operator<<(std::ostream& output, const Form& form){
	output << form.getName() << ", form signed " << form.getSigned() << ", signGrade " << form.getSignGrade() << ", executeGrade " << form.getExecuteGrade();
	return output;
}
