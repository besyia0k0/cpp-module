/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 00:45:11 by hkong             #+#    #+#             */
/*   Updated: 2023/05/06 17:51:37 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm(): name("default"), sign(false), signGrade(150), executeGrade(150) {
	std::cout << GREEN << "+ [ AForm ] default constructor called +" << CLOSE << std::endl;
}

AForm::AForm(const std::string name_, const int signGrade_, const int executeGrade_): name(name_), sign(false), signGrade(checkGrade(signGrade_)), executeGrade(checkGrade(executeGrade_)) {
	std::cout << GREEN << "+ [ AForm ] " << name << " constructor called +" << CLOSE << std::endl;
}

AForm::AForm(const AForm& aForm): name(aForm.getName()), sign(false), signGrade(checkGrade(aForm.getSignGrade())), executeGrade(checkGrade(aForm.getExecuteGrade())) {
	std::cout << GREEN << "+ [ AForm ] " << name << " copy constructor called +" << CLOSE << std::endl;
}

AForm& AForm::operator=(const AForm& aForm) {
	std::cout << GREEN << "= [ AForm ] " << name << " copy assignment operator called (*do nothing*) =" << CLOSE << std::endl;
	// name, signGrade, executeGrade is constant variable, so it cannot changed.
	// also sign is done by special case, so it makes no sense.
	aForm.getName();
	return *this;
}

AForm::~AForm() {
	std::cout << GREEN << "- [ AForm ] " << name << " destructor called -" << CLOSE << std::endl;
}

std::string AForm::getName() const {
	return name;
}

bool	AForm::getSigned() const {
	return sign;
}

int	AForm::getSignGrade() const {
	return signGrade;
}

int AForm::getExecuteGrade() const {
	return executeGrade;
}

void	AForm::canExecute(Bureaucrat const& bureaucrat) const {
	if (sign == false)
		throw ExecuteNotSignedException();
	if (bureaucrat.getGrade() > executeGrade)
		throw GradeTooLowException();
}

void	AForm::beSigned(Bureaucrat const& bureaucrat) {
	if (bureaucrat.getGrade() <= signGrade)
		sign = true;
	else
		throw GradeTooLowException();
}

int AForm::checkGrade(int grade) const {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	return grade;
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "*** [ Exception ] AForm: Grade Too High ***";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "*** [ Exception ] AForm: Grade Too Low ***";
}

const char* AForm::ExecuteNotSignedException::what() const throw() {
	return "*** [ Exception ] AForm: Not signed form cannot execute ***";
}

std::ostream& operator<<(std::ostream& output, const AForm& aForm){
	output << aForm.getName() << ", aForm signed " << aForm.getSigned() << ", signGrade " << aForm.getSignGrade() << ", executeGrade " << aForm.getExecuteGrade();
	return output;
}
