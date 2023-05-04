/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:33:31 by hkong             #+#    #+#             */
/*   Updated: 2023/05/04 21:52:10 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default"), grade(150) {
	std::cout << "+ [ Bureaucrat ] default constructor called +" << std::endl;
	verifyGrade();
}

Bureaucrat::Bureaucrat(const std::string name_, int grade_): name(name_), grade(grade_) {
	std::cout << "+ [ Bureaucrat ] " << name << " constructor called +" << std::endl;
	verifyGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat): name(bureaucrat.getName()), grade(bureaucrat.getGrade()) {
	std::cout << "+ [ Bureaucrat ] " << name << " copy constructor called +" << std::endl;
	verifyGrade();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat) {
	std::cout << "= [ Bureaucrat ] " << name << " copy assignment operator called =" << std::endl;
	// name is constant variable, so it cannot changed.
	grade = bureaucrat.getGrade();
	verifyGrade();
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "- [ Bureaucrat ] " << name << " destructor called -" << std::endl;
}

std::string Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::verifyGrade() const {
	if (grade < 1)
		throw GradeTooLowException();
	else if (grade > 150)
		throw GradeTooHighException();
}

void Bureaucrat::incrementGrade() {
	std::cout << "/ " << name << " increment grade. /" << std::endl;
	grade--;
	verifyGrade();
}

void Bureaucrat::decrementGrade() {
	std::cout << "/ " << name << " decrement grade. /" << std::endl;
	grade++;
	verifyGrade();
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "! [ Exception ] Bureaucrat: Grade Too High !";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "! [ Exception ] Bureaucrat: Grade Too Low !";
}

std::ostream& operator<<(std::ostream& output, const Bureaucrat& bureaucrat) {
	output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return output;
}