/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:35:39 by hkong             #+#    #+#             */
/*   Updated: 2023/04/16 12:51:48 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	private:
		Brain*	brain;

	public:
		Cat();
		Cat(const Cat& cat);
		Cat& operator=(const Cat& cat);
		~Cat();

		void	makeSound(void) const;
		void	showIdeas(void)	const;
		void	insertIdea(int index, std::string idea);
};

#endif