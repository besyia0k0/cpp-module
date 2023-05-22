/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:55:38 by hkong             #+#    #+#             */
/*   Updated: 2023/05/22 22:17:23 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>

# include <array>
# include <vector>
# include <deque>
# include <stack>
# include <queue>
# include <list>

# define YELLOW "\x1B[33m"
# define GREEN "\x1B[32m"
# define RED "\x1B[31m"
# define CLOSE "\x1B[0m"

template <typename T>
typename T::iterator	easyfind(T& container, int target) {
	typename T::iterator it = container.begin();

	for (; it != container.end(); it++) {
		if (*it == target)
			break;
	}
	return it;
}

template <typename T>
void	easyfindTest(T& container, int target) {
	typename T::iterator it = easyfind(container, target);

	if (it != container.end())
		std::cout << "Find Target!: " << *it << std::endl;
	else {
		std::cout << "Cannot Find target " << target << " in [ ";
		for (typename T::iterator i = container.begin(); i != container.end(); i++)
			std::cout << *i << " ";
		std::cout << "]" << std::endl;
	}
}

#endif