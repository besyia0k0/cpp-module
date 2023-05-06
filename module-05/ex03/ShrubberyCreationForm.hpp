/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 09:40:43 by hkong             #+#    #+#             */
/*   Updated: 2023/05/06 17:03:43 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"
# include <fstream>

class Bureaucrat;

class ShrubberyCreationForm: public AForm {
	private:
		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(std::string name_);
		ShrubberyCreationForm(ShrubberyCreationForm& shrubberyCreationForm);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm& shrubberyCreationForm);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const& executor) const;
};

#endif