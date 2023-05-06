/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 09:40:53 by hkong             #+#    #+#             */
/*   Updated: 2023/05/06 11:15:50 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"

class PresidentialPardonForm: public AForm {
	private:
		PresidentialPardonForm();

	public:
		PresidentialPardonForm(std::string name_);
		PresidentialPardonForm(PresidentialPardonForm& presidentialPardonForm);
		PresidentialPardonForm& operator=(PresidentialPardonForm& presidentialPardonForm);
		~PresidentialPardonForm();

		void execute(Bureaucrat const& executor) const;
};

#endif