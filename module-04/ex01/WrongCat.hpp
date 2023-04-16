/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:35:39 by hkong             #+#    #+#             */
/*   Updated: 2023/04/16 13:19:30 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class WrongCat: public Animal {
	private:
		Brain*	brain;

	public:
		WrongCat();
		WrongCat(const WrongCat& wrongCat);
		WrongCat& operator=(const WrongCat& wrongCat);
		~WrongCat();

		void	makeSound(void) const;
		void	showIdeas(void)	const;
		void	insertIdea(int index, std::string idea);
};

#endif