/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 09:40:45 by hkong             #+#    #+#             */
/*   Updated: 2023/05/06 17:19:06 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("default", 145, 137) {
	std::cout << GREEN << "+ [ ShrubberyCreationForm ] default constructor called +" << CLOSE << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name_): AForm(name_, 145, 137) {
	std::cout << GREEN << "+ [ ShrubberyCreationForm ] " << getName() << " constructor called +" << CLOSE << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& shrubberyCreationForm): AForm(shrubberyCreationForm.getName(), shrubberyCreationForm.getSignGrade(), shrubberyCreationForm.getExecuteGrade()) {
	std::cout << GREEN << "+ [ ShrubberyCreationForm ] " << getName() << " copy constructor called +" << CLOSE << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& shrubberyCreationForm) {
	std::cout << GREEN << "= [ ShrubberyCreationForm ] " << getName() << " copy assignment operator called (*do nothing*) =" << CLOSE << std::endl;
	// name, signGrade, executeGrade is constant variable, so it cannot changed.
	// also sign is done by special case, so it makes no sense.
	shrubberyCreationForm.getName();
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << GREEN << "- [ ShrubberyCreationForm ] " << getName() << " destructor called -" << CLOSE << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	std::string stringFileName = executor.getName() + "_shrubbery";
	const char* outfileName = stringFileName.c_str();
	std::ofstream outfile(outfileName, std::ofstream::trunc);
	
	canExecute(executor);
	if (outfile) {
		outfile << "            # #### ####             " << std::endl;
	  outfile << "          ### \\/#|### |/####        " << std::endl;
	  outfile << "         ##\\/#/ \\||/##/_/##/_#      " << std::endl;
	  outfile << "       ###  \\/###|/ \\/ # ###        " << std::endl;
	  outfile << "     ##_\\_#\\_\\## | #/###_/_####     " << std::endl;
	  outfile << "    ## #### # \\ #| /  #### ##/##    " << std::endl;
	  outfile << "     __#_--###`  |{,###---###-~     " << std::endl;
	  outfile << "               \\ }{                 " << std::endl;
	  outfile << "                }}{                 " << std::endl;
	  outfile << "                }}{                 " << std::endl;
	  outfile << "           ejm  {{}                 " << std::endl;
	  outfile << "          , -=-~{ .-^- _            " << std::endl;
	  outfile << "                `}                  " << std::endl;
	  outfile << "                 {'                 " << std::endl;
		outfile.close();
	}
}