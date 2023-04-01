/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:58:08 by hkong             #+#    #+#             */
/*   Updated: 2023/04/01 16:20:22 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

# define YELLOW "\x1B[33m"
# define GREEN "\x1B[32m"
# define CLOSE "\x1B[0m"

class Animal {
	protected:
		std::string	type;

	public:
		Animal();
		Animal(std::string type_);
		Animal(const Animal& animal);
		Animal& operator=(const Animal& animal);
		virtual ~Animal();

		std::string		getType(void)	const;
		virtual void	makeSound(void) const = 0;
};

#endif