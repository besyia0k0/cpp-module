/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:33:36 by hkong             #+#    #+#             */
/*   Updated: 2023/05/06 18:00:25 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
	char a;
	
	std::cout << YELLOW << "----------- Shrubbery Function Test -----------" << CLOSE << std::endl;
	std::cout << YELLOW << "----------- Basic Test -----------" << CLOSE << std::endl;
	{
		/* Required grades: sign 145, exec 137 */
		ShrubberyCreationForm	form("shrubForm");
		Bureaucrat	person("Person", 20);

		std::cout << form << std::endl;
		std::cout << person << std::endl;
		person.signForm(form);
		person.executeForm(form);
	}
	// std::cout << YELLOW << "----------- Error Test : sign -----------" << CLOSE << std::endl;
	// {
	// 	/* Required grades: sign 145, exec 137 */
	// 	ShrubberyCreationForm	form("shrubForm");
	// 	Bureaucrat	person("PersonA", 146);

	// 	std::cout << form << std::endl;
	// 	std::cout << person << std::endl;
	// 	person.signForm(form);
	// 	person.incrementGrade();
	// 	person.signForm(form);
	// }
	// std::cout << YELLOW << "----------- Error Test : exec -----------" << CLOSE << std::endl;
	// {
	// 	/* Required grades: sign 145, exec 137 */
	// 	ShrubberyCreationForm	form("shrubForm");
	// 	Bureaucrat	personA("PersonA", 20);
	// 	Bureaucrat	personB("PersonB", 138);

	// 	std::cout << form << std::endl;
	// 	std::cout << personA << std::endl;
	// 	std::cout << personB << std::endl;
	// 	personA.signForm(form);
	// 	personB.executeForm(form);
	// 	personB.incrementGrade();
	// 	personB.executeForm(form);
	// }
	std::cout << YELLOW << "------------------ Test Fin ------------------" << CLOSE << std::endl;
	std::cin >> a;
	std::cout << YELLOW << "----------- Robotomy Function Test -----------" << CLOSE << std::endl;
	std::cout << YELLOW << "----------- Basic Test -----------" << CLOSE << std::endl;
	{
		/* Required grades: sign 72, exec 45 */
		RobotomyRequestForm	form("robotomyForm");
		Bureaucrat	person("Person", 20);

		std::cout << form << std::endl;
		std::cout << person << std::endl;
		person.signForm(form);
		person.executeForm(form);
	}
	std::cout << YELLOW << "----------- Error Test -----------" << CLOSE << std::endl;
	{
		/* Required grades: sign 72, exec 45 */
		RobotomyRequestForm	form("robotomyForm");
		Bureaucrat	personA("PersonA", 73);
		Bureaucrat	personB("PersonB", 46);

		std::cout << form << std::endl;
		std::cout << personA << std::endl;
		personA.signForm(form);
		personA.incrementGrade();
		personA.signForm(form);
		personB.executeForm(form);
		personB.incrementGrade();
		personB.executeForm(form);
	}
	std::cout << YELLOW << "------------------ Test Fin ------------------" << CLOSE << std::endl;
	std::cin >> a;
	std::cout << YELLOW << "----------- Presidential Function Test -----------" << CLOSE << std::endl;
	std::cout << YELLOW << "----------- Basic Test -----------" << CLOSE << std::endl;
	{
		/* Required grades: sign 25, exec 5 */
		PresidentialPardonForm	form("presidentialForm");
		Bureaucrat	person("Person", 2);

		std::cout << form << std::endl;
		std::cout << person << std::endl;
		person.signForm(form);
		person.executeForm(form);
	}
	std::cout << YELLOW << "-------- Error Test : exec --------" << CLOSE << std::endl;
	{
		/* Required grades: sign 25, exec 5 */
		PresidentialPardonForm	form("presidentialForm");
		Bureaucrat	person("Person", 5);

		std::cout << form << std::endl;
		std::cout << person << std::endl;
		person.signForm(form);
		person.executeForm(form);
		person.decrementGrade();
		person.executeForm(form);
	}
	std::cout << YELLOW << "------------------ Test Fin ------------------" << CLOSE << std::endl;

	return 0;
}