/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 00:45:18 by hkong             #+#    #+#             */
/*   Updated: 2023/05/06 08:54:08 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
# include <exception>

class Bureaucrat;

class Form {
	private:
		const std::string name;
		bool	sign;
		const int signGrade;
		const int executeGrade;
		
		int		checkGrade(int grade) const;
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

	public:
		Form();
		Form(const std::string name_, const int signGrade_, const int executeGrade_);
		Form(const Form& form);
		Form& operator=(const Form& form);
		~Form();

		std::string	getName() const;
		bool	getSigned() const;
		int		getSignGrade() const;
		int		getExecuteGrade() const;
		
		void	beSigned(Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream& output, const Form& form);


#endif