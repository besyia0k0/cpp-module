/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:35:49 by hkong             #+#    #+#             */
/*   Updated: 2023/03/23 19:17:04 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
	private:
		Brain*	brain;

	public:
		Dog();
		Dog(const Dog& dog);
		Dog& operator=(const Dog& dog);
		~Dog();

		void	makeSound(void) const;
		void	showIdeas(void)	const;
		void	insertIdea(int index, std::string idea);
};

#endif