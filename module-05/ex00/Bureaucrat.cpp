/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:33:31 by hkong             #+#    #+#             */
/*   Updated: 2023/05/06 17:50:17 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default"), grade(150) {
	std::cout << GREEN << "+ [ Bureaucrat ] default constructor called +" << CLOSE << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name_, int grade_): name(name_), grade(checkGrade(grade_)) {
	std::cout << GREEN << "+ [ Bureaucrat ] " << name << " constructor called +" << CLOSE << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat): name(bureaucrat.getName()), grade(checkGrade(bureaucrat.getGrade())) {
	std::cout << GREEN << "+ [ Bureaucrat ] " << name << " copy constructor called +" << CLOSE << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat) {
	// name is constant variable, so it cannot changed.
	grade = checkGrade(bureaucrat.getGrade());
	std::cout << GREEN << "= [ Bureaucrat ] " << name << " copy assignment operator called =" << CLOSE << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << GREEN << "- [ Bureaucrat ] " << name << " destructor called -" << CLOSE << std::endl;
}

std::string Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

int Bureaucrat::checkGrade(int grade_) const {
	if (grade_ < 1)
		throw GradeTooHighException();
	else if (grade_ > 150)
		throw GradeTooLowException();
	return grade_;
}

void Bureaucrat::incrementGrade() {
	grade = checkGrade(grade - 1);
	std::cout << "(" << name << "): increment grade." << std::endl;
}

void Bureaucrat::decrementGrade() {
	grade = checkGrade(grade + 1);
	std::cout << "(" << name << "): decrement grade." << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "*** [ Exception ] Bureaucrat: Grade Too High ***";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "*** [ Exception ] Bureaucrat: Grade Too Low ***";
}

std::ostream& operator<<(std::ostream& output, const Bureaucrat& bureaucrat) {
	output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return output;
}