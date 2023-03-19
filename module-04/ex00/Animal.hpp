/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:58:08 by hkong             #+#    #+#             */
/*   Updated: 2023/03/19 22:11:03 by hkong            ###   ########.fr       */
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
		Animal(const Animal& animal);
		Animal& operator=(const Animal& animal);
		~Animal();

		void	makeSound(void);
};

#endif