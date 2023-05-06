/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:33:36 by hkong             #+#    #+#             */
/*   Updated: 2023/05/06 09:10:25 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	std::cout << YELLOW << "----------- Basic Function Test -----------" << CLOSE << std::endl;
	{
		Form	form("Form", 30, 50);
		Bureaucrat	person("Person", 20);

		std::cout << form << std::endl;
		std::cout << person << std::endl;
		person.signForm(form);
	}
	std::cout << YELLOW << "---------------- Test Fin ----------------" << CLOSE << std::endl;
	std::cout << YELLOW << "-------- Construct Low Grade Test --------" << CLOSE << std::endl;
	{
		try {
			Form a("low", 130, 155);
			std::cout << a << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "-------- Construct High Grade Test --------" << CLOSE << std::endl;
	{
		try {
			Form a("high", 0, 10);
			std::cout << a << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "------------- Sign Form Test -------------" << CLOSE << std::endl;
	{
		Form form("Form", 40, 30);
		Bureaucrat person("Person", 41);
		
		try {
			std::cout << form << std::endl;
			std::cout << person << std::endl;
			person.signForm(form);			
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		
		std::cout << "----- Error Occured! -----" << std::endl;
		
		try {
			person.incrementGrade();
			std::cout << person << std::endl;
			person.signForm(form);
			std::cout << form << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "---------------- Test Fin ----------------" << CLOSE << std::endl;

	return 0;
}