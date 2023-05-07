/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:02:07 by hkong             #+#    #+#             */
/*   Updated: 2023/05/07 15:31:55 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "AForm.hpp"

# define YELLOW "\x1B[33m"
# define GREEN "\x1B[32m"
# define RED "\x1B[31m"
# define CLOSE "\x1B[0m"

class Intern {
	private:
		class FormNotExistException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

	public:
		Intern();
		Intern(Intern &intern);
		Intern& operator=(Intern& intern);
		~Intern();

		AForm* makeForm(std::string formName, std::string formTarget);
};

#endif