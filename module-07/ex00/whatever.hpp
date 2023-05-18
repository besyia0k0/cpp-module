/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:22:41 by hkong             #+#    #+#             */
/*   Updated: 2023/05/18 22:17:21 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template <typename T>
void swap(T& a, T& b) {
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(const T& a, const T& b) {
	if (a < b)
		return a;
	return b;
}

template <typename T>
T max(const T& a, const T& b) {
	if (a > b)
		return a;
	return b;
}

#endif