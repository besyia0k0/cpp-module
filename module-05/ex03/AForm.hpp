/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 00:45:18 by hkong             #+#    #+#             */
/*   Updated: 2023/05/06 17:07:22 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
# include <exception>

class Bureaucrat;

class AForm {
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
		class ExecuteNotSignedException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

	public:
		AForm();
		AForm(const std::string name_, const int signGrade_, const int executeGrade_);
		AForm(const AForm& aForm);
		AForm& operator=(const AForm& aForm);
		virtual ~AForm();

		std::string	getName() const;
		bool	getSigned() const;
		int		getSignGrade() const;
		int		getExecuteGrade() const;

		void	canExecute(Bureaucrat const& bureaucrat) const;
		void	beSigned(Bureaucrat const& bureaucrat);
		virtual void execute(Bureaucrat const& executor) const = 0;
};

std::ostream& operator<<(std::ostream& output, const AForm& aForm);


#endif