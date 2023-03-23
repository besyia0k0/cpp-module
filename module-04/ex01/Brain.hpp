/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:11:20 by hkong             #+#    #+#             */
/*   Updated: 2023/03/23 18:03:34 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define YELLOW "\x1B[33m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define CLOSE "\x1B[0m"

class Brain {
	private:
		std::string	ideas[100];
	
	public:
		Brain();
		Brain(const Brain& brain);
		Brain& operator=(const Brain& brain);
		~Brain();

		void	showIdeas(void) const;
		void	insertIdea(int index, std::string idea);
};

#endif