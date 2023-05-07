/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:33:36 by hkong             #+#    #+#             */
/*   Updated: 2023/05/07 21:47:13 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
	char a;
	
	std::cout << YELLOW << "----------- Shrubbery Form Test -----------" << CLOSE << std::endl;
	{
		Intern intern;
		Bureaucrat	person("Person", 20);
		AForm* shrubberyForm = intern.makeForm("shrubbery creation", "shrubbery");

		if (shrubberyForm) {
			std::cout << *shrubberyForm << std::endl;
			std::cout << person << std::endl;
			std::cout << std::endl;
			
			person.signForm(*shrubberyForm);
			std::cout << std::endl;
			
			person.executeForm(*shrubberyForm);
		}
	}
	std::cout << YELLOW << "------------------ Test Fin ------------------" << CLOSE << std::endl;
	std::cin >> a;
	std::cout << YELLOW << "----------- Robotomy Form Test -----------" << CLOSE << std::endl;
	{
		Intern intern;
		Bureaucrat	person("Person", 20);
		AForm* robotomyForm = intern.makeForm("robotomy request", "robotomy");

		if (robotomyForm) {
			std::cout << *robotomyForm << std::endl;
			std::cout << person << std::endl;
			std::cout << std::endl;
			
			person.signForm(*robotomyForm);
			std::cout << std::endl;

			person.executeForm(*robotomyForm);
		}
	}
	std::cout << YELLOW << "------------------ Test Fin ------------------" << CLOSE << std::endl;
	std::cin >> a;
	std::cout << YELLOW << "----------- Presidential Form Test -----------" << CLOSE << std::endl;
	{
		Intern intern;
		Bureaucrat	person("Person", 3);
		AForm* presidentialForm = intern.makeForm("presidential pardon", "presidential");

		if (presidentialForm) {
			std::cout << *presidentialForm << std::endl;
			std::cout << person << std::endl;
			std::cout << std::endl;

			person.signForm(*presidentialForm);
			std::cout << std::endl;

			person.executeForm(*presidentialForm);
		}
	}
	std::cout << YELLOW << "------------------ Test Fin ------------------" << CLOSE << std::endl;
	std::cin >> a;
	std::cout << YELLOW << "----------- Not Exist Form Test -----------" << CLOSE << std::endl;
	{
		Intern intern;
		Bureaucrat	person("Person", 3);
		AForm* testForm = intern.makeForm("foo", "not exist");

		if (testForm) {
			std::cout << *testForm << std::endl;
			std::cout << person << std::endl;
			std::cout << std::endl;

			person.signForm(*testForm);
			std::cout << std::endl;

			person.executeForm(*testForm);
		}
	}
	std::cout << YELLOW << "------------------ Test Fin ------------------" << CLOSE << std::endl;
	return 0;
}