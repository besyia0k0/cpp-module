/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:18:49 by hkong             #+#    #+#             */
/*   Updated: 2023/05/18 22:26:45 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void iter(const T (&array)[], size_t size, T (*func)(T&)) {
	for (size_t i = 0; i < size; i++) {
		func(array[i]);
	}
}

#endif