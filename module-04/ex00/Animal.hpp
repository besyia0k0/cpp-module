/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:58:08 by hkong             #+#    #+#             */
/*   Updated: 2023/03/23 15:17:04 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
	protected:
		std::string	type;

	public:
		Animal();
		Animal(std::string type_);
		Animal(const Animal& animal);
		Animal& operator=(const Animal& animal);
		~Animal();

		std::string		getType(void)	const;
		virtual void	makeSound(void) const;
};

#endif