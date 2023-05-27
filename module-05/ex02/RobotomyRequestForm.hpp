/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 09:40:48 by hkong             #+#    #+#             */
/*   Updated: 2023/05/27 21:06:28 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"
# include <ctime>
# include <cstdlib>

class Bureaucrat;

class RobotomyRequestForm: public AForm {
	private:
		RobotomyRequestForm();

	public:
		RobotomyRequestForm(std::string name_);
		RobotomyRequestForm(const RobotomyRequestForm& robotomyRequestForm);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& robotomyRequestForm);
		~RobotomyRequestForm();

		void execute(Bureaucrat const& executor) const;
};

#endif